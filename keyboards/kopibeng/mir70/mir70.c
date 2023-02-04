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

#include "mir70.h"

led_config_t g_led_config = { {
	{ 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12,     13,     15,     16},
	{32,     31,     30,     29,     28,     27,     26,     25,     24,     23,     22,     21,     20,     18,     14,     17},
	{33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44,     45,     19,     46,     47},
	{61,     60, NO_LED,     59,     58,     57,     56,     55,     54,     53,     52,     51,     50,     49,     48, NO_LED},
	{62,     63,     64,     65, NO_LED, NO_LED, NO_LED,     66, NO_LED, NO_LED, NO_LED,     67,     68,     69,     70,     71}
}, {
	{  0,  0}, { 15,  0}, { 30,  0}, { 45,  0}, { 60,  0}, { 75,  0}, { 90,  0}, {105,  0}, {120,  0}, {135,  0}, {150,  0}, {165,  0}, {180,  0}, {195,  0}, {210,  0}, {224,  0}, 
	{224, 16}, {202,  0}, {207, 16}, {187, 16}, {172, 16}, {157, 16}, {142, 16}, {127, 16}, {112, 16}, { 97, 16}, { 82, 16}, { 67, 16}, { 52, 16}, { 37, 16}, { 18, 16}, {  0, 16},
	{  0, 32}, { 18, 32}, { 40, 32}, { 55, 32}, { 70, 32}, { 85, 32}, {100, 32}, {115, 32}, {130, 32}, {145, 32}, {160, 32}, {175, 32}, {190, 32}, {195, 16}, {205, 32}, {224, 32},
	{210, 48}, {200, 48}, {182, 48}, {167, 48}, {152, 48}, {137, 48}, {122, 48}, {107, 48}, { 92, 48}, { 77, 48}, { 62, 48}, { 47, 48}, { 23, 48}, {  0, 48},
	{  0, 64}, { 16, 64}, { 30, 64}, { 45, 64}, {105, 64}, {165, 64}, {180, 64}, {202, 64}, {210, 64}, {224, 64}
}, {
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    4,
	4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,    4,
	4, 1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    4,
	4, 1, 1, 1,          4,          1, 1,    4, 4, 4
} };
