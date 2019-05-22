#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

#endif


#if !defined(NO_DEBUG) && !defined(CONSOLE_ENABLE)

#define NO_DEBUG

#endif // !NO_DEBUG

#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)

#define NO_PRINT

#endif // !NO_PRINT

#define NO_ACTION_MACRO

#define NO_ACTION_FUNCTION

#define DISABLE_LEADER
#define MIDI_BASIC
