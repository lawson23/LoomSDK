/*
 * ===========================================================================
 * Loom SDK
 * Copyright 2011, 2012, 2013
 * The Game Engine Company, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===========================================================================
 */

#ifndef _LOOM_COMMON_PLATFORM_PLATFORMKEYCODES_H_
#define _LOOM_COMMON_PLATFORM_PLATFORMKEYCODES_H_

// This and related conversion code in the platform tables are based on the
// USB HID constants by way of GameShell
// (http://onesadcookie.com/svn/GameShell/Source/MacOSX/GSKeyCodes.c)

enum LOOM_KEYS
{
    LOOM_KEY_A                      =                     0x04,
    LOOM_KEY_B                      =                     0x05,
    LOOM_KEY_C                      =                     0x06,
    LOOM_KEY_D                      =                     0x07,
    LOOM_KEY_E                      =                     0x08,
    LOOM_KEY_F                      =                     0x09,
    LOOM_KEY_G                      =                     0x0A,
    LOOM_KEY_H                      =                     0x0B,
    LOOM_KEY_I                      =                     0x0C,
    LOOM_KEY_J                      =                     0x0D,
    LOOM_KEY_K                      =                     0x0E,
    LOOM_KEY_L                      =                     0x0F,
    LOOM_KEY_M                      =                     0x10,
    LOOM_KEY_N                      =                     0x11,
    LOOM_KEY_O                      =                     0x12,
    LOOM_KEY_P                      =                     0x13,
    LOOM_KEY_Q                      =                     0x14,
    LOOM_KEY_R                      =                     0x15,
    LOOM_KEY_S                      =                     0x16,
    LOOM_KEY_T                      =                     0x17,
    LOOM_KEY_U                      =                     0x18,
    LOOM_KEY_V                      =                     0x19,
    LOOM_KEY_W                      =                     0x1A,
    LOOM_KEY_X                      =                     0x1B,
    LOOM_KEY_Y                      =                     0x1C,
    LOOM_KEY_Z                      =                     0x1D,
    LOOM_KEY_1                      =                     0x1E,
    LOOM_KEY_2                      =                     0x1F,
    LOOM_KEY_3                      =                     0x20,
    LOOM_KEY_4                      =                     0x21,
    LOOM_KEY_5                      =                     0x22,
    LOOM_KEY_6                      =                     0x23,
    LOOM_KEY_7                      =                     0x24,
    LOOM_KEY_8                      =                     0x25,
    LOOM_KEY_9                      =                     0x26,
    LOOM_KEY_0                      =                     0x27,
    LOOM_KEY_RETURN_OR_ENTER        =       0x28,
    LOOM_KEY_ESCAPE                 =                0x29,
    LOOM_KEY_DELETE_OR_BACKSPACE    =   0x2A,
    LOOM_KEY_TAB                    =                   0x2B,
    LOOM_KEY_SPACEBAR               =              0x2C,
    LOOM_KEY_HYPHEN                 =                0x2D,
    LOOM_KEY_EQUAL_SIGN             =            0x2E,
    LOOM_KEY_OPEN_BRACKET           =          0x2F,
    LOOM_KEY_CLOSE_BRACKET          =         0x30,
    LOOM_KEY_BACKSLASH              =             0x31,
    LOOM_KEY_NON_USPOUND            =           0x32,
    LOOM_KEY_SEMICOLON              =             0x33,
    LOOM_KEY_QUOTE                  =                 0x34,
    LOOM_KEY_GRAVE_ACCENT_AND_TILDE =0x35,
    LOOM_KEY_COMMA                  =                 0x36,
    LOOM_KEY_PERIOD                 =                0x37,
    LOOM_KEY_SLASH                  =                 0x38,
    LOOM_KEY_CAPS_LOCK              =             0x39,
    LOOM_KEY_F1                     =                    0x3A,
    LOOM_KEY_F2                     =                    0x3B,
    LOOM_KEY_F3                     =                    0x3C,
    LOOM_KEY_F4                     =                    0x3D,
    LOOM_KEY_F5                     =                    0x3E,
    LOOM_KEY_F6                     =                    0x3F,
    LOOM_KEY_F7                     =                    0x40,
    LOOM_KEY_F8                     =                    0x41,
    LOOM_KEY_F9                     =                    0x42,
    LOOM_KEY_F10                    =                   0x43,
    LOOM_KEY_F11                    =                   0x44,
    LOOM_KEY_F12                    =                   0x45,
    LOOM_KEY_PRINT_SCREEN           =          0x46,
    LOOM_KEY_SCROLL_LOCK            =           0x47,
    LOOM_KEY_PAUSE                  =                 0x48,
    LOOM_KEY_INSERT                 =                0x49,
    LOOM_KEY_HOME                   =                  0x4A,
    LOOM_KEY_PAGE_UP                =               0x4B,
    LOOM_KEY_DELETE_FORWARD         =        0x4C,
    LOOM_KEY_END                    =                   0x4D,
    LOOM_KEY_PAGE_DOWN              =             0x4E,
    LOOM_KEY_RIGHT_ARROW            =           0x4F,
    LOOM_KEY_LEFT_ARROW             =            0x50,
    LOOM_KEY_DOWN_ARROW             =            0x51,
    LOOM_KEY_UP_ARROW               =              0x52,
    LOOM_KEY_PADNUM_LOCK            =                0x53,
    LOOM_KEY_PADSLASH               =                   0x54,
    LOOM_KEY_PADASTERISK            =                0x55,
    LOOM_KEY_PADHYPHEN              =                  0x56,
    LOOM_KEY_PADPLUS                =                    0x57,
    LOOM_KEY_PADENTER               =                   0x58,
    LOOM_KEY_PAD1                   =                       0x59,
    LOOM_KEY_PAD2                   =                       0x5A,
    LOOM_KEY_PAD3                   =                       0x5B,
    LOOM_KEY_PAD4                   =                       0x5C,
    LOOM_KEY_PAD5                   =                       0x5D,
    LOOM_KEY_PAD6                   =                       0x5E,
    LOOM_KEY_PAD7                   =                       0x5F,
    LOOM_KEY_PAD8                   =                       0x60,
    LOOM_KEY_PAD9                   =                       0x61,
    LOOM_KEY_PAD0                   =                       0x62,
    LOOM_KEY_PADPERIOD              =                  0x63,
    LOOM_KEY_NON_US_BACKSLASH       =      0x64,
    LOOM_KEY_APPLICATION            =           0x65,
    LOOM_KEY_POWER                  =                 0x66,
    LOOM_KEY_PADEQUAL_SIGN          =              0x67,
    LOOM_KEY_F13                    =                   0x68,
    LOOM_KEY_F14                    =                   0x69,
    LOOM_KEY_F15                    =                   0x6A,
    LOOM_KEY_F16                    =                   0x6B,
    LOOM_KEY_F17                    =                   0x6C,
    LOOM_KEY_F18                    =                   0x6D,
    LOOM_KEY_F19                    =                   0x6E,
    LOOM_KEY_F20                    =                   0x6F,
    LOOM_KEY_F21                    =                   0x70,
    LOOM_KEY_F22                    =                   0x71,
    LOOM_KEY_F23                    =                   0x72,
    LOOM_KEY_F24                    =                   0x73,
    LOOM_KEY_EXECUTE                =               0x74,
    LOOM_KEY_HELP                   =                  0x75,
    LOOM_KEY_MENU                   =                  0x76,
    LOOM_KEY_SELECT                 =                0x77,
    LOOM_KEY_STOP                   =                  0x78,
    LOOM_KEY_AGAIN                  =                 0x79,
    LOOM_KEY_UNDO                   =                  0x7A,
    LOOM_KEY_CUT                    =                   0x7B,
    LOOM_KEY_COPY                   =                  0x7C,
    LOOM_KEY_PASTE                  =                 0x7D,
    LOOM_KEY_FIND                   =                  0x7E,
    LOOM_KEY_MUTE                   =                  0x7F,
    LOOM_KEY_VOLUME_UP              =             0x80,
    LOOM_KEY_VOLUME_DOWN            =           0x81,
    LOOM_KEY_LOCKING_CAPS_LOCK      =     0x82,
    LOOM_KEY_LOCKING_NUM_LOCK       =      0x83,
    LOOM_KEY_LOCKING_SCROLL_LOCK    =   0x84,
    LOOM_KEY_PADCOMMA               =                   0x85,
    LOOM_KEY_PADEQUAL_SIGN_AS400    =        0x86,
    LOOM_KEY_INTERNATIONAL_1        =       0x87,
    LOOM_KEY_INTERNATIONAL_2        =       0x88,
    LOOM_KEY_INTERNATIONAL_3        =       0x89,
    LOOM_KEY_INTERNATIONAL_4        =       0x8A,
    LOOM_KEY_INTERNATIONAL_5        =       0x8B,
    LOOM_KEY_INTERNATIONAL_6        =       0x8C,
    LOOM_KEY_INTERNATIONAL_7        =       0x8D,
    LOOM_KEY_INTERNATIONAL_8        =       0x8E,
    LOOM_KEY_INTERNATIONAL_9        =       0x8F,
    LOOM_KEY_LANG1                  =                 0x90,
    LOOM_KEY_LANG2                  =                 0x91,
    LOOM_KEY_LANG3                  =                 0x92,
    LOOM_KEY_LANG4                  =                 0x93,
    LOOM_KEY_LANG5                  =                 0x94,
    LOOM_KEY_LANG6                  =                 0x95,
    LOOM_KEY_LANG7                  =                 0x96,
    LOOM_KEY_LANG8                  =                 0x97,
    LOOM_KEY_LANG9                  =                 0x98,
    LOOM_KEY_ALTERNATE_ERASE        =       0x99,
    LOOM_KEY_SYS_REQ_OR_ATTENTION   =  0x9A,
    LOOM_KEY_CANCEL                 =                0x9B,
    LOOM_KEY_CLEAR                  =                 0x9C,
    LOOM_KEY_PRIOR                  =                 0x9D,
    LOOM_KEY_RETURN                 =                0x9E,
    LOOM_KEY_SEPARATOR              =             0x9F,
    LOOM_KEY_OUT                    =                   0xA0,
    LOOM_KEY_OPER                   =                  0xA1,
    LOOM_KEY_CLEAR_OR_AGAIN         =        0xA2,
    LOOM_KEY_CR_SEL_OR_PROPS        =       0xA3,
    LOOM_KEY_EX_SEL                 =                0xA4,
    LOOM_KEY_LEFT_CONTROL           =          0xE0,
    LOOM_KEY_LEFT_SHIFT             =            0xE1,
    LOOM_KEY_LEFT_ALT               =              0xE2,
    LOOM_KEY_LEFT_GUI               =              0xE3,
    LOOM_KEY_RIGHT_CONTROL          =         0xE4,
    LOOM_KEY_RIGHT_SHIFT            =           0xE5,
    LOOM_KEY_RIGHT_ALT              =             0xE6,
    LOOM_KEY_RIGHT_GUI              =             0xE7,
};
#endif