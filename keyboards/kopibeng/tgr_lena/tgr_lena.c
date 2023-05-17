/* Copyright 2023 Samuel Lu
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

#include "tgr_lena.h"
	
led_config_t g_led_config = { {
	{    51,     52,     53,     54,     55,     56,     57,     58,     59,     60,     61,     62,     63,     64,     66,     67,     68,     69},
	{    50,     49,     48,     47,     46,     45,     44,     43,     42,     41,     40,     39,     38,     65,     36,     72,     71,     70},
	{    22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     33,     34,     37,     35,     73,     74,     75},
	{NO_LED,     21,     20,     19,     18,     17,     16,     15,     14,     13,     12,     11,     10,      9,      8,     78,     77,     76},
	{NO_LED,      0, NO_LED,      1, NO_LED,      2,      3, NO_LED,      4, NO_LED,      5, NO_LED, NO_LED,      6,      7,     79,     80,     81}
}, {
	{ 13, 64}, { 39, 64}, { 66, 64}, { 79, 64}, {105, 64}, {132, 64}, {171, 64}, {184, 64},
	{184, 48}, {171, 48}, {158, 48}, {145, 48}, {132, 48}, {119, 48}, {105, 48}, { 92, 48}, { 79, 48}, { 66, 48}, { 53, 48}, { 39, 48}, { 26, 48}, { 13, 48},
	{  0, 32}, { 13, 32}, { 26, 32}, { 39, 32}, { 53, 32}, { 66, 32}, { 79, 32}, { 92, 32}, {105, 32}, {119, 32}, {132, 32}, {145, 32}, {158, 32}, {184, 32}, {184, 16}, {171, 32},
	{158, 16}, {145, 16}, {132, 16}, {119, 16}, {105, 16}, { 92, 16}, { 79, 16}, { 66, 16}, { 53, 16}, { 39, 16}, { 26, 16}, { 13, 16}, {  0, 16},
	{  0,  0}, { 13,  0}, { 26,  0}, { 39,  0}, { 53,  0}, { 66,  0}, { 79,  0}, { 92,  0}, {105,  0}, {119,  0}, {132,  0}, {145,  0}, {158,  0}, {171,  0}, {171, 16}, {184,  0},
	{198,  0}, {211,  0}, {224,  0}, 
	{224, 16}, {211, 16}, {198, 16}, 
	{198, 32}, {211, 32}, {224, 32}, 
	{224, 48}, {211, 48}, {198, 48}, 
	{198, 64}, {211, 64}, {224, 64}	
}, {
	1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 4, 4, 4,
	1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4, 4,
	1, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,       1, 4, 4, 4,
	   1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1, 4, 4, 4,
	   1,    1,    4, 1,    4,    1,       1,    1, 4, 4, 4
} };
