#include QMK_KEYBOARD_H

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define CK_CAPS LT(1, KC_CAPS)
// #define
// #define
// #define
// #define

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(\
    KC_F11,  KC_F12,      KC_ESC,  M(4),    M(5),    KC_SLEP, M(3),    M(6),    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_PSCR, KC_SLCK, KC_PAUS,
    KC_F1,   KC_F2,       KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,     MO(2),   KC_WHOM,    M(2),    M(1),
    KC_F3,   KC_F4,       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,     KC_DEL,  KC_END,  KC_PGDN,     _______, _______, _______, KC_CALC,
    KC_F5,   KC_F6,       CK_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,               XXXXXXX, XXXXXXX, XXXXXXX,     KC_MPRV, KC_MPLY, KC_MNXT, _______,
    KC_F7,   KC_F8,       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_BSLS,              XXXXXXX, KC_UP,   XXXXXXX,     KC_MUTE, KC_VOLD, KC_VOLU, M(0),
    KC_F9,   KC_F10,      KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_RALT, MO(1),   KC_APP,  KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT,     _______,          _______
  ),

  [1] = LAYOUT(\
    _______, _______,     RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NLCK,              _______, _______, _______,
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______,     _______, _______, _______, _______,
    _______, _______,     _______, KC_HOME, KC_UP  , KC_END , KC_PGUP, _______, KC_PGUP, KC_HOME, KC_UP  , KC_END , _______, _______, _______, _______,     _______, _______, _______,     _______, _______, _______, _______,
    _______, _______,     _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,              XXXXXXX, XXXXXXX, XXXXXXX,     _______, _______, _______, _______,
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              XXXXXXX, _______, XXXXXXX,     _______, _______, _______, _______,
    _______, _______,     M(0),    _______, _______,                   KC_ENT,                                      _______, _______, _______, _______,     _______, _______, _______,     _______,          _______

  ),

  [2] = LAYOUT(\
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              _______, _______, _______,
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______,     _______, KC_PSLS, KC_PAST, KC_PMNS,
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______,     KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              XXXXXXX, XXXXXXX, XXXXXXX,     KC_P4,   KC_P5,   KC_P6,   KC_EQL,
    _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,              XXXXXXX, _______, XXXXXXX,     KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    _______, _______,     _______, _______, _______,                   _______,                                     _______, _______, _______, _______,     _______, _______, _______,     KC_P0,            KC_PDOT

  ),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

	if (record->event.pressed) {
		switch (id) {
			case 0:
				return MACRO( D(LALT), T(P0), T(P1), T(P7), T(P5), U(LALT), W(5), T(BSLS), W(5), D(LSFT), T(MINS), T(9), U(LSFT), W(5), D(LALT), T(PPLS), T(P3), T(P0), T(C), T(P4), U(LALT), W(5), D(LSFT), T(0), T(MINS), U(LSFT), W(5), T(SLSH), W(5), D(LALT), T(P0), T(P1), T(P7), T(P5), U(LALT), END );
			case 1:
				return MACRO( D(LCTL), D(LALT), T(DEL), U(LALT), U(LCTL), END);
			case 2:
				return MACRO( D(LGUI), T(R), U(LGUI), W(200), T(N), T(O), T(T), T(E), T(P), T(A), T(D), T(ENT), END);
			case 3:
				return MACRO( D(LALT), T(F4), U(LALT), END);
			case 4:
				return MACRO( D(LGUI), T(R), U(LGUI), END);
			case 5:
				return MACRO( D(LGUI), T(L), U(LGUI), END);
			case 6:
				return MACRO( D(LGUI), T(R), U(LGUI), W(200), T(S), T(N), T(D), T(V), T(O), T(L), T(ENT), END);
		}
	}
	return MACRO_NONE;

};



void led_set_kb(uint8_t usb_led) {
  DDRB |= (1 << 4) | (1 << 5) | (1 << 6);
/*
  if (usb_led & (1 << USB_LED_NUM_LOCK)) {
    PORTB |= (1 << 4);
  } else {
    PORTB} &= ~(1 << 4);
  }
*/
  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    PORTB |= (1 << 5);
  } else {
    PORTB &= ~(1 << 5);
  }

  if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
    PORTB |= (1 << 6);
  } else {
    PORTB &= ~(1 << 6);
  }
}

uint32_t layer_state_set_kb(uint32_t state) {
  if (state & (1<<2)){
    PORTB |= (1 << PD4);
  }
  else{
    PORTB &= ~(1 << PD4);
  }
  return state;
}