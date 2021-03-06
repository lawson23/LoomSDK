package
{
    import game.GameConfig;
    import loom.Application;
    import loom2d.display.Sprite;
    import loom2d.display.StageScaleMode;
    import loom2d.events.Event;
    import loom2d.textures.TextureSmoothing;
    import ui.Theme;
    import ui.views.ConfigView;
    import ui.views.game.AdView;
    import ui.views.game.DifficultyView;
    import ui.views.game.EndView;
    import ui.views.game.GameView;
    import ui.views.game.IntroView;
    import ui.views.game.ModeView;
    import ui.views.View;
    
    /**
     * Main application class containing all the views and transitions between them.
     * The game involves a full gameplay loop from the intro screen (IntroView)
     * to picking game modes (ModeView, DifficultyView),
     * the actual game itself (GameView),
     * the game over (EndView) and ad (AdView) screens.
     */
    public class KrushBlokk extends Application
    {
        public var config:GameConfig = new GameConfig();
        
        private var intro = new IntroView();
        private var mode = new ModeView();
        private var difficulty = new DifficultyView();
        private var game = new GameView();
        private var end = new EndView();
        private var ad = new AdView();
        
        private var display:Sprite = new Sprite();
        private var currentView:View;
        
        private var contentWidth = 450;
        private var contentHeight = 580;
        private var pixelScale = 4;
        
        override public function run()
        {
            // No scaling for stage for custom scaling logic in resize()
            stage.scaleMode = StageScaleMode.NONE;
            
            // Don't interpolate pixels - rough pixel art look
            TextureSmoothing.defaultSmoothing = TextureSmoothing.NONE;
            
            // Instantiates the custom theme contained in the Theme class,
            // setting up the fonts and custom label, button and checkbox styles.
            new Theme();
            
            config.reset();
            
            // View initialization
            var views:Vector.<View> = new <View>[intro, mode, difficulty, game, end, ad];
            for each (var view:View in views) {
                if (view is ConfigView) (view as ConfigView).config = config;
                view.init();
            }
            
            // Transitions between views
            intro.onStart += function() { switchView(mode); };
            mode.onPick += function() {
                if (config.duration == -1) {
                    switchView(game);
                } else {
                    switchView(difficulty);
                }
            };
            difficulty.onPick += function() {
                switchView(game);
            };
            game.onQuit += function() {
                end.gameScore = game.score;
                end.quitManually = true;
                switchView(end);
            };
            game.onTimeout += function() {
                end.gameScore = game.score;
                end.quitManually = false;
                switchView(end);
            };
            end.onContinue += function() {
                switchView(ad);
            };
            ad.onContinue += function() {
                switchView(intro);
            };
            
            
            stage.addChild(display);
            stage.addEventListener(Event.RESIZE, resize);
            
            // View on startup
            // You can uncomment a different view to start from that one.
            // Note that this can lead to uninitialized state (i.e. for game config),
            // so it's good to have sensible implicit defaults of values.
            // Even better, Loom allows for state persistence,
            // but that is out of scope for this example (see PersistenceExample).
            switchView(intro);
            //switchView(mode);
            //switchView(difficulty);
            //switchView(game);
            //switchView(end);
            //switchView(ad);
        }
        
        /**
         * Responsive layout! Scale display so it's contained within stage
         */
        private function resize(e:Event = null)
        {
            if (stage.stageWidth/stage.stageHeight < contentWidth/contentHeight) {
                display.scale = Math.max(1, Math.floor(pixelScale*stage.stageWidth/contentWidth));
            } else {
                display.scale = Math.max(1, Math.floor(pixelScale*stage.stageHeight/contentHeight));
            }
            var w = stage.stageWidth/display.scale;
            var h = stage.stageHeight/display.scale;
            currentView.resize(w, h);
        }
        
        /**
         * State machine transition for views
         */
        private function switchView(newView:View)
        {
            if (currentView) currentView.exit();
            currentView = newView;
            currentView.enter(display);
            resize();
        }
        
        /**
         * Pass on onTick to the current view
         */
        override public function onTick()
        {
            currentView.tick();
            return super.onTick();
        }
        
        /**
         * Pass on onFrame to the current view
         */
        override public function onFrame()
        {
            currentView.render();
            return super.onFrame();
        }
        
    }
}