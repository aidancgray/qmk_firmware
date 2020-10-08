#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                }
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

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

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

// QMK has a fork of the LUFA DFU bootloader that allows for a simple matrix scan for exiting
// the bootloader and returning to the application, as well as flashing an LED/making a ticking
// noise with a speaker when things are happening.
#define QMK_ESC_OUTPUT F1 // usually COL
#define QMK_ESC_INPUT D5 // usually ROW
#define QMK_LED E6
#define QMK_SPEAKER C6

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTIONS