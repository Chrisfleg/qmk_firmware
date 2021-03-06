#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap VANILLA: (Base Layer) Default Layer
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10  |  F11  |  F12  |   Delete   |    Prtsc    |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * |  ~  |     1   |   2   |   3   |   4   |    5      |       6    |    7    |    8    |    9  |   0  |   -  |   =  |  Backspace  |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * | Tab |   Q    |    W   |   E  |   R  |   T  |            |    Y   |    U   |    I   |   O   |   P  |   [  |   ]  |    \ | PgUp |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * | Ctl |   A   |   S   |   D  |   F  |   G  |      Bksp      |    H  |    J   |   K   |   L   |   ;  |  '"  |    Enter    | PgDn |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * |Shift|   Z  |   X  |   C  |   V  |   B  |       Enter       |    N  |    M   |   ,  |   .   |  /?  | Shift|      |  Up  |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   * |Ctrl | GUI |     Alter   |     Space   |   Ctrl   |   Shift  |     Space     |     Alter    |  FN  | Ctrl | Lft  |  Dn  |  Rig |
   * |---------------------------------------------------------------------------------------------------------------------------------|
   */
  [0] = LAYOUT(
		KC_ESC,  KC_F1,   KC_F2, KC_F3,  KC_F4,  KC_F5,   KC_F6,  KC_F7, KC_F8,  KC_F9,   KC_F10, KC_F11,  KC_F12,  KC_DEL,  KC_PSCR,\
		KC_GRV,  KC_1,    KC_2,  KC_3,   KC_4,   KC_5,            KC_6,   KC_7,  KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,\
		KC_TAB,  KC_Q,    KC_W,  KC_E,   KC_R,   KC_T,    KC_PGUP,KC_Y,   KC_U,  KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,\
		KC_CAPS, KC_A,    KC_S,  KC_D,   KC_F,   KC_G,    KC_BSPC,KC_H,  KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,  KC_PGDN,\
		KC_LSFT, KC_Z,    KC_X,  KC_C,   KC_V,   KC_B,    KC_ENT, KC_N,  KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,\
		KC_LCTL, KC_LGUI, KC_LALT,       KC_SPC, KC_LCTL, KC_LSFT,KC_SPC,        KC_RALT, MO(1),  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
  [1] = LAYOUT(
    RESET,     NK_TOGG, RGB_TOG, RGB_MOD,  RGB_HUI,  RGB_SAI,   RGB_SAD,  RGB_VAI,  RGB_VAD,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,\
    AG_TOGG,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,             KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,\
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_HOME,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,\
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_END,\
    KC_TRNS,   UC_M_WI, UC_M_MA, UC_M_LN,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_VOLU,\
    KC_TRNS,   GUI_OFF, GUI_ON,            KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,   KC_TRNS,  KC_TRNS,   RGB_SPD,   KC_VOLD,   RGB_SPI)
};
