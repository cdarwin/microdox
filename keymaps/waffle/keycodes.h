#pragma once

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  CP_PSTE,
  SSH_PI,
  ALT_TAB,
  SPD_TP,
  COMP6,
  COMPKB,
  CTLS,
  CTLZ,
  MAKE,
  CAD,
  UNIT,
  UNIT2,
  UNIT3,
  UNIT4
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define SFA SFT_T(KC_A)
#define SFCLN RSFT_T(KC_SCLN)
#define CTLZ CTL_T(KC_Z)
#define CTLSLH RCTL_T(KC_SLSH)
#define SFEXM MT(MOD_LSFT, KC_F23)
#define SFPRN MT(MOD_RSFT, KC_F24)
#define CTLESC CTL_T(KC_ESC)
#define CTLNXT RCTL_T(KC_MNXT)
#define GPSCR G(KC_PSCR)
#define STATIC SFT_T(RGBLIGHT_MODE_STATIC_LIGHT)
