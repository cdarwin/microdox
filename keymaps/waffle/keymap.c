#include QMK_KEYBOARD_H
#include "split_util.h"
#include "keycodes.h"
#include "unicodes.h"
#include "macros.h"

#ifdef OLED_DRIVER_ENABLE
#   include "oled.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
//-----------------------------------------------------------------------------------------------//
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
//-----------------------------------------------------------------------------------------------//
  SFA,     KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    SFCLN,
//-----------------------------------------------------------------------------------------------//
  CTLZ,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  CTLSLH,
//-----------------------------------------------------------------------------------------------//
                    KC_LGUI, LOWER, KC_SPC,         KC_BSPC, RAISE,  TG(3)
),

[_LOWER] = LAYOUT(
//-----------------------------------------------------------------------------------------------//
  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
//-----------------------------------------------------------------------------------------------//
  SFEXM,   KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,       KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  SFPRN,
//-----------------------------------------------------------------------------------------------//
  CTLESC,  KC_TAB,  KC_CAPS,  KC_TILD,  KC_GRV,        KC_QUOT,  ALT_TAB,  KC_MPRV,  KC_MPLY,  CTLNXT,
//-----------------------------------------------------------------------------------------------//
                      KC_PGUP, KC_TRNS, KC_SPC,      KC_ENT, KC_TRNS, KC_PGDN
),

[_RAISE] = LAYOUT(
//-----------------------------------------------------------------------------------------------//
  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,      MAKE,     UNIT,     UNIT2,   UNIT3,  UNIT4,
//-----------------------------------------------------------------------------------------------//
  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,      CP_PSTE,  KC_UP,    MAKE,    CAD,    SSH_PI,
//-----------------------------------------------------------------------------------------------//
  KC_CAPS,  KC_TILD,  CTLZ,     CTLS,     GPSCR,        KC_LEFT,  KC_DOWN,  KC_RGHT, COMP6,  COMPKB,
//-----------------------------------------------------------------------------------------------//
                        KC_VOLD, KC_TRNS, KC_SPC,      KC_ENT,  KC_TRNS, KC_VOLU
),

[_ADJUST] = LAYOUT(
//-----------------------------------------------------------------------------------------------//
  RESET,    RGB_TOG,  RGB_M_G, RGB_HUI, RGB_SAI,       STAR,    _______, KC_ASON,  KC_ASUP,  UC_M_WC,
//-----------------------------------------------------------------------------------------------//
  EEP_RST,  RGB_MOD,  RGB_M_B, RGB_HUD, RGB_SAD,       MUS,     _______, KC_ASOFF, KC_ASDN,  UC_M_MA,
//-----------------------------------------------------------------------------------------------//
  KC_LSFT,  RGB_RMOD, STATIC,  RGB_VAD, RGB_VAI,       _______, _______, _______, _______,   UC_M_LN,
//-----------------------------------------------------------------------------------------------//
                      XXXXXXX, KC_TRNS, XXXXXXX,      XXXXXXX,  KC_TRNS, TG(3)
)

};
