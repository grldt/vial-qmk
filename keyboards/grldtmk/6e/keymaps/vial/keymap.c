#include QMK_KEYBOARD_H

// please change this value to the desired layer definitions
#define LAYERNUM 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
                KC_A, KC_B
              ),

    [1] = LAYOUT(
                KC_TRNS, KC_TRNS
        ),

    [2] = LAYOUT(
                KC_TRNS, KC_TRNS
        ),
    [3] = LAYOUT(
                KC_TRNS, KC_TRNS
        )

};
