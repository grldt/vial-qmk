#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
           KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,  KC_HOME, \
           KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,    KC_BSPC,       KC_PGUP, \
    KC_F1, KC_CAPS, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,     KC_ENT,       KC_PGDN, \
    KC_F2, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,             KC_UP,   MO(1),  \
    KC_F3, KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                               KC_RALT, MO(1), KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  [1] = LAYOUT(
           KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,  KC_HOME, \
           KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,    KC_BSPC,       KC_PGUP, \
    KC_F1, KC_CAPS, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,        KC_SCLN, KC_QUOT,     KC_ENT,       KC_PGDN, \
    KC_F2, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,             KC_UP,   MO(1),  \
    KC_F3, KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                               KC_RALT, MO(1), KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  [2] = LAYOUT(
           KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,  KC_HOME, \
           KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,    KC_BSPC,       KC_PGUP, \
    KC_F1, KC_CAPS, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,        KC_SCLN, KC_QUOT,     KC_ENT,       KC_PGDN, \
    KC_F2, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,             KC_UP,   MO(1),  \
    KC_F3, KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                               KC_RALT, MO(1), KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  [3] = LAYOUT(
           KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,  KC_HOME, \
           KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,    KC_BSPC,       KC_PGUP, \
    KC_F1, KC_CAPS, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,        KC_SCLN, KC_QUOT,     KC_ENT,       KC_PGDN, \
    KC_F2, KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,             KC_UP,   MO(1),  \
    KC_F3, KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                               KC_RALT, MO(1), KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT \
  )



};
