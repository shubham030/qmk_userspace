#pragma once

// Split keyboard configuration
#define EE_HANDS
#define SPLIT_USB_DETECT

// Home row mods configuration
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS
#define QUICK_TAP_TERM 0

// OLED configuration
#ifdef OLED_ENABLE
    #define OLED_TIMEOUT 30000
    #define OLED_BRIGHTNESS 120
#endif

// RGB configuration
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_TIMEOUT 300000
    #define RGB_MATRIX_SLEEP
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_KEYRELEASES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50
#endif

// Encoder configuration
#ifdef ENCODER_ENABLE
    #define ENCODER_RESOLUTION 2
#endif