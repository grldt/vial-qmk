#include QMK_KEYBOARD_H

// please change this value to the desired layer definitions
#define LAYERNUM 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
                KC_1, KC_2, KC_3, KC_4,KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_COMM, KC_DOT
              ),

    [1] = LAYOUT(
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),

    [2] = LAYOUT(
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),

    [3] = LAYOUT(
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        )

};
