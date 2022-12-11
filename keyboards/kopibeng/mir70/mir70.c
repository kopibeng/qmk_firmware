/* Copyright 2021 Samuel Lu
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

#include "mir70.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
    {0, CS30_SW1, CS29_SW1, CS28_SW1}, /* LED01-K00-00 */
    {0, CS30_SW2, CS29_SW2, CS28_SW2}, /* LED02-K01-01 */
    {0, CS30_SW3, CS29_SW3, CS28_SW3}, /* LED03-K02-02 */
    {0, CS30_SW4, CS29_SW4, CS28_SW4}, /* LED04-K03-03 */
    {0, CS30_SW5, CS29_SW5, CS28_SW5}, /* LED05-K04-04 */
    {0, CS30_SW6, CS29_SW6, CS28_SW6}, /* LED06-K05-05 */
    {0, CS30_SW7, CS29_SW7, CS28_SW7}, /* LED07-K06-06 */
    {0, CS30_SW8, CS29_SW8, CS28_SW8}, /* LED08-K07-07 */	
    {0, CS21_SW8, CS20_SW8, CS19_SW8}, /* LED09-K08-08 */
    {0, CS21_SW7, CS20_SW7, CS19_SW7}, /* LED10-K09-09 */
    {0, CS21_SW6, CS20_SW6, CS19_SW6}, /* LED11-K0A-10 */
    {0, CS21_SW5, CS20_SW5, CS19_SW5}, /* LED12-K0B-11 */
    {0, CS21_SW4, CS20_SW4, CS19_SW4}, /* LED13-K0C-12 */
    {0, CS21_SW3, CS20_SW3, CS19_SW3}, /* LED14-K0D-13 */
    {0, CS21_SW2, CS20_SW2, CS19_SW2}, /* LED15-K1E-14 */
    {0, CS24_SW2, CS23_SW2, CS22_SW2}, /* LED47-K0E-15 */
    // {0, CS24_SW1, CS23_SW1, CS22_SW1}, /* LED48-K0E-16 */
    {0, CS21_SW1, CS20_SW1, CS19_SW1}, /* LED16-K0F-16 */
		
    {0, CS33_SW1, CS32_SW1, CS31_SW1}, /* LED17-K10-17 */
    {0, CS33_SW2, CS32_SW2, CS31_SW2}, /* LED18-K11-18 */
    {0, CS33_SW3, CS32_SW3, CS31_SW3}, /* LED19-K12-19 */
    {0, CS33_SW4, CS32_SW4, CS31_SW4}, /* LED20-K13-20 */
    {0, CS33_SW5, CS32_SW5, CS31_SW5}, /* LED21-K14-21 */
    {0, CS33_SW6, CS32_SW6, CS31_SW6}, /* LED22-K15-22 */
    {0, CS33_SW7, CS32_SW7, CS31_SW7}, /* LED23-K16-23 */
    {0, CS33_SW8, CS32_SW8, CS31_SW8}, /* LED24-K17-24 */	
    {0, CS27_SW8, CS26_SW8, CS25_SW8}, /* LED25-K18-25 */
    {0, CS27_SW7, CS26_SW7, CS25_SW7}, /* LED26-K19-26 */
    {0, CS27_SW6, CS26_SW6, CS25_SW6}, /* LED27-K1A-27 */
    {0, CS27_SW5, CS26_SW5, CS25_SW5}, /* LED28-K1B-28 */
    {0, CS27_SW4, CS26_SW4, CS25_SW4}, /* LED29-K1C-29 */
    {0, CS27_SW3, CS26_SW3, CS25_SW3}, /* LED30-K2D-30 */
    {0, CS27_SW2, CS26_SW2, CS25_SW2}, /* LED31-K1D-31 */
    {0, CS27_SW1, CS26_SW1, CS25_SW1}, /* LED32-K1F-32 */
	
    {0, CS36_SW1, CS35_SW1, CS34_SW1}, /* LED33-K20-33 */
    {0, CS36_SW2, CS35_SW2, CS34_SW2}, /* LED34-K21-34 */
    {0, CS36_SW3, CS35_SW3, CS34_SW3}, /* LED35-K22-35 */
    {0, CS36_SW4, CS35_SW4, CS34_SW4}, /* LED36-K23-36 */
    {0, CS36_SW5, CS35_SW5, CS34_SW5}, /* LED37-K24-37 */
    {0, CS36_SW6, CS35_SW6, CS34_SW6}, /* LED38-K25-38 */
    {0, CS36_SW7, CS35_SW7, CS34_SW7}, /* LED39-K26-39 */
    {0, CS36_SW8, CS35_SW8, CS34_SW8}, /* LED40-K27-40 */	
    {0, CS24_SW8, CS23_SW8, CS22_SW8}, /* LED41-K28-41 */
    {0, CS24_SW7, CS23_SW7, CS22_SW7}, /* LED42-K29-42 */
    {0, CS24_SW6, CS23_SW6, CS22_SW6}, /* LED43-K2A-43 */
    {0, CS24_SW5, CS23_SW5, CS22_SW5}, /* LED44-K2B-44 */
    {0, CS24_SW4, CS23_SW4, CS22_SW4}, /* LED45-K2C-45 */
    {0, CS24_SW3, CS23_SW3, CS22_SW3}, /* LED46-K2E-46 */
	{0, CS18_SW1, CS17_SW1, CS16_SW1}, /* LED63-K2F-47 */
	
	{0, CS39_SW1, CS38_SW1, CS37_SW1}, /* LED49-K30-48 */
	{0, CS39_SW2, CS38_SW2, CS37_SW2}, /* LED50-K31-49 */
	{0, CS39_SW4, CS38_SW4, CS37_SW4}, /* LED51-K33-50 */
	{0, CS39_SW5, CS38_SW5, CS37_SW5}, /* LED52-K34-51 */
	{0, CS39_SW6, CS38_SW6, CS37_SW6}, /* LED53-K35-52 */
	{0, CS39_SW7, CS38_SW7, CS37_SW7}, /* LED54-K36-53 */
	{0, CS39_SW8, CS38_SW8, CS37_SW8}, /* LED55-K37-54 */	
	{0, CS18_SW8, CS17_SW8, CS16_SW8}, /* LED56-K38-55 */
	{0, CS18_SW7, CS17_SW7, CS16_SW7}, /* LED57-K39-56 */
	{0, CS18_SW6, CS17_SW6, CS16_SW6}, /* LED58-K3A-57 */
	{0, CS18_SW5, CS17_SW5, CS16_SW5}, /* LED59-K3B-58 */
	{0, CS18_SW4, CS17_SW4, CS16_SW4}, /* LED60-K3C-59 */
	{0, CS18_SW3, CS17_SW3, CS16_SW3}, /* LED61-K3D-60 */
	{0, CS18_SW2, CS17_SW2, CS16_SW2}, /* LED62-K3E-61 */
	
	{0, CS12_SW1, CS11_SW1, CS10_SW1}, /* LED64-K40-62 */
	{0, CS12_SW2, CS11_SW2, CS10_SW2}, /* LED65-K41-63 */
	{0, CS12_SW3, CS11_SW3, CS10_SW3}, /* LED66-K42-64 */
	{0, CS12_SW4, CS11_SW4, CS10_SW4}, /* LED67-K43-65 */
	{0, CS12_SW8, CS11_SW8, CS10_SW8}, /* LED68-K47-66 */	
	{0, CS15_SW5, CS14_SW5, CS13_SW5}, /* LED69-K4B-67 */
	{0, CS15_SW4, CS14_SW4, CS13_SW4}, /* LED70-K4C-68 */
	{0, CS15_SW3, CS14_SW3, CS13_SW3}, /* LED71-K4D-69 */
	{0, CS15_SW2, CS14_SW2, CS13_SW2}, /* LED72-K4E-70 */
	{0, CS15_SW1, CS14_SW1, CS13_SW1}, /* LED73-K4F-71 */
};

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
		{ 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12,     13,     15,     16},
		{17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     31,     14,     32},
		{33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44,     45,     30,     46,     47},
		{48,     49, NO_LED,     50,     51,     52,     53,     54,     55,     56,     57,     58,     59,     60,     61, NO_LED},
		{62,     63,     64,     65, NO_LED, NO_LED, NO_LED,     66, NO_LED, NO_LED, NO_LED,     67,     68,     69,     70,     71},
    }, {
        //LED Index to Physical Positon
		{0, 0}, {15, 0}, {30, 0}, {45, 0}, {60, 0}, {75, 0}, {90, 0}, {105, 0}, {120, 0}, {135, 0}, {150, 0}, {165, 0}, {180, 0}, {195, 0}, {202, 0}, {210, 0}, {224, 0},
		{0,16}, {15,16}, {30,16}, {45,16}, {60,16}, {75,16}, {90,16}, {105,16}, {120,16}, {135,16}, {150,16}, {165,16}, {180,16}, {195,16},           {210,16}, {224,16},
		{0,32}, {15,32}, {30,32}, {45,32}, {60,32}, {75,32}, {90,32}, {105,32}, {120,32}, {135,32}, {150,32}, {165,32}, {180,16},                     {210,32}, {224,32},
		{0,48}, {15,48},          {45,48}, {60,48}, {75,48}, {90,48}, {105,48}, {120,48}, {135,48}, {150,48}, {165,48}, {180,48},           {202,48}, {210,48},
		{0,64}, {15,64}, {30,64}, {45,64},                            {105,64},                               {165,64}, {180,64},           {202,64}, {210,64}, {224,64},
    }, {
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 4, 
		4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4,  
		4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,       1, 4,
		4, 1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1, 4,
		4, 1, 1, 1,          1,          1, 1,    4, 4, 4, 
    } 
};

__attribute__((weak)) void rgb_matrix_indicators_user(void) {
        if (host_keyboard_led_state().caps_lock) {
            rgb_matrix_set_color(34, 255, 255, 255);
        }
}

#endif
