/* Copyright 2022 sugengz
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/*
#ifdef ENCODER_ENABLE
	bool encoder_update_user(uint8_t index, bool clockwise){
		if (index == 0) {
			if (clockwise){
				tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,9));
			} else {
				tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,10));
			}
			}

		if (index == 1) {
			if (clockwise){
				tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,12));
			} else {
				tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,13));
			}
			}
			return false;
	}
#endif	
*/

/*
// Light LEDs 2 to 4 and 12 to 14 red when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 3, HSV_RED},       // Light 3 LEDs, starting with LED 2
    {12, 3, HSV_RED}       // Light 3 LEDs, starting with LED 12
);
// Light LEDs 10 & 11 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {10, 2, HSV_CYAN}
);
// Light LEDs 5 & 6 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {5, 2, HSV_PURPLE}
);
// Light LEDs 7 to 9 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {7, 3, HSV_GREEN}
);
*/

/*
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 3, HSV_RED},       // Light 3 LEDs, starting with LED 1 (count from LED0)
    {11, 3, HSV_RED}       // Light 3 LEDs, starting with LED 12 (count from LED0)
);

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
    const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
      	KC_GRV,   KC_F1,   KC_F2, 	KC_F3, 	KC_F4, 	KC_F5, 	KC_F6,   KC_F7,   KC_F8, 	
	    KC_ESC,   KC_1,    KC_2, 	KC_3, 	KC_4, 	KC_5, 	KC_MINS, KC_BSLS, KC_EQL, 	KC_6, 	 KC_7, 	 KC_8, 	  KC_9, 	KC_0, 	 KC_BSPC, 
		KC_TAB,   KC_Q,    KC_W, 	KC_E, 	KC_R, 	KC_T, 	KC_HOME, KC_DEL,  KC_PGUP, 	KC_Y, 	 KC_U, 	 KC_I, 	  KC_O, 	KC_P, 	 KC_QUOT, 
		KC_CAPS,  KC_A,    KC_S, 	KC_D, 	KC_F, 	KC_G, 	KC_END,  KC_INS,  KC_PGDN, 	KC_H,  	 KC_J, 	 KC_K, 	  KC_L, 	KC_SCLN, KC_ENT, 
		KC_LSFT,  KC_Z,    KC_X,	KC_C, 	KC_V, 	KC_B, 	KC_LBRC, KC_UP,   KC_RBRC, 	KC_N, 	 KC_M, 	 KC_COMM, KC_DOT, 	KC_SLSH, KC_LSFT, 
		KC_LCTL,  KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_RIGHT, KC_SPC,  KC_SPC, KC_LALT, KC_LGUI, 	KC_MENU, KC_LCTL
		),

  [1] = LAYOUT(
     	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),
  
  [2] = LAYOUT(
      	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),

  [3] = LAYOUT(
    	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		),
};
