/*
 * This file is part of roccat-tools.
 *
 * roccat-tools is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * roccat-tools is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with roccat-tools. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ryos_key_relations.h"
#include "ryos_stored_lights.h"

RyosKeyRelation const ryos_key_relations[RYOS_KEY_RELATIONS_NUM] = {
	/* keys_macro */
	{0xaa, 0, 0x00, 0x05, 0x00, RYOS_KEY_RELATION_KEYS_TYPE_MACRO, 0x00, 0x05},
	{0xab, 1, 0x01, 0x06, 0x18, RYOS_KEY_RELATION_KEYS_TYPE_MACRO, 0x01, 0x06},
	{0xac, 2, 0x02, 0x07, 0x30, RYOS_KEY_RELATION_KEYS_TYPE_MACRO, 0x02, 0x07},
	{0xad, 3, 0x03, 0x08, 0x48, RYOS_KEY_RELATION_KEYS_TYPE_MACRO, 0x03, 0x08},
	{0xae, 4, 0x04, 0x09, 0x60, RYOS_KEY_RELATION_KEYS_TYPE_MACRO, 0x04, 0x09},

	/* keys_function */
	{0x3a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x02, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x00, 0x0f},
	{0x3b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0e, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x01, 0x10},
	{0x3c, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x03, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x02, 0x11},
	{0x3d, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0f, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x03, 0x12},
	{0x3e, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x04, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x04, 0x13},
	{0x3f, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x10, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x05, 0x14},
	{0x40, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x05, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x06, 0x15},
	{0x41, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x11, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x07, 0x16},
	{0x42, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x06, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x08, 0x17},
	{0x43, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x07, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x09, 0x18},
	{0x44, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x08, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x0a, 0x19},
	{0x45, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x14, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x0b, 0x1a},
	{0x46, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x09, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x0c, 0x1b},
	{0x47, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x15, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x0d, 0x1c},
	{0x48, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x21, RYOS_KEY_RELATION_KEYS_TYPE_FUNCTION, 0x0e, 0x1d},

	/* keys_thumbster */
	/* primary values are artificial and need to be syncronized with ryos_key_button.c:hid_to_beauty_keyname() */
	{0xf2, 5, 0x0a, 0x0d, 0x78, RYOS_KEY_RELATION_KEYS_TYPE_THUMBSTER, 0x00, 0x03},
	{0xf3, 6, 0x0b, 0x0e, 0x79, RYOS_KEY_RELATION_KEYS_TYPE_THUMBSTER, 0x01, 0x04},
	{0xf4, 7, 0x0c, 0x0f, 0x7a, RYOS_KEY_RELATION_KEYS_TYPE_THUMBSTER, 0x02, 0x05},

	/* keys_easyzone */
	{0x35, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x10, 0x0c, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x00},
	{0x1e, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x11, 0x0d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x01},
	{0x1f, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x12, 0x19, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x02},
	{0x20, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x13, 0x1a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x03},
	{0x21, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x14, 0x1b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x04},
	{0x22, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x15, 0x27, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x05},
	{0x23, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x16, 0x1c, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x06},
	{0x24, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x17, 0x28, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x07},
	{0x25, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x18, 0x1d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x08},
	{0x26, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x19, 0x29, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x09},
	{0x27, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1a, 0x12, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0a},
	{0x2d, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1b, 0x1e, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0b},
	{0x2e, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1c, 0x13, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0c},
	{0x89, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1d, 0x20, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0d},
	{0x2a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1e, 0x2c, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0e},
	{0x49, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x54, 0x2d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x44},
	{0x4a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x55, 0x39, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x45},
	{0x4b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x56, 0x45, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x46},
	{0x53, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5e, 0x0a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4e},
	{0x54, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5f, 0x16, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4f},
	{0x55, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x60, 0x0b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x50},
	{0x56, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x61, 0x17, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x51},
	{0x2b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1f, 0x24, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x0f},
	{0x14, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x20, 0x25, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x10},
	{0x1a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x21, 0x31, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x11},
	{0x08, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x22, 0x26, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x12},
	{0x15, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x23, 0x32, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x13},
	{0x17, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x24, 0x33, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x14},
	{0x1c, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x25, 0x34, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x15},
	{0x18, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x26, 0x40, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x16},
	{0x0c, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x27, 0x35, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x17},
	{0x12, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x28, 0x2a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x18},
	{0x13, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x29, 0x36, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x19},
	{0x2f, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2a, 0x1f, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1a},
	{0x30, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2b, 0x2b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1b},
	{0x31, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2c, 0x38, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1c},
	{0x4c, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x57, 0x51, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x47},
	{0x4d, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x58, 0x5d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x48},
	{0x4e, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x59, 0x69, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x49},
	{0x5f, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x62, 0x22, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x52},
	{0x60, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x63, 0x2e, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x53},
	{0x61, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x64, 0x23, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x54},
	{0x57, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x65, 0x2f, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x55},
	{0x04, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2d, 0x3d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1d},
	{0x16, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2e, 0x49, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1e},
	{0x07, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2f, 0x3e, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x1f},
	{0x09, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x30, 0x4a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x20},
	{0x0a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x31, 0x3f, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x21},
	{0x0b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x32, 0x4b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x22},
	{0x0d, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x33, 0x4c, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x23},
	{0x0e, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x34, 0x41, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x24},
	{0x0f, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x35, 0x42, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x25},
	{0x33, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x36, 0x4e, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x26},
	{0x34, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x37, 0x37, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x27},
	{0x32, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x38, 0x43, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x28},
	{0x28, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x39, 0x44, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x29},
	{0x5c, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x66, 0x3a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x56},
	{0x5d, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x67, 0x46, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x57},
	{0x5e, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x68, 0x3b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x58},
	{0xe1, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3a, 0x54, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2a},
	{0x64, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3b, 0x55, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2b},
	{0x1d, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3c, 0x61, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2c},
	{0x1b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3d, 0x56, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2d},
	{0x06, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3e, 0x62, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2e},
	{0x19, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3f, 0x57, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x2f},
	{0x05, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x40, 0x63, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x30},
	{0x11, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x41, 0x58, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x31},
	{0x10, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x42, 0x4d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x32},
	{0x36, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x43, 0x59, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x33},
	{0x37, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x44, 0x5a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x34},
	{0x38, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x45, 0x4f, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x35},
	{0x87, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x46, 0x5b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x36},
	{0xe5, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x47, 0x50, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x37},
	{0x52, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5a, 0x75, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4a},
	{0x59, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x6a, 0x52, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5a},
	{0x5a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x6b, 0x5e, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5b},
	{0x5b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x6c, 0x53, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5c},
	{0x58, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x6d, 0x5f, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5d},
	{0xe0, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x48, 0x6c, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x38},
	{0xe3, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x49, 0x6d, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x39},
	{0xe2, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4a, 0x6e, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3a},
	{0x8b, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4b, 0x64, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3b},
	{0x2c, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4d, 0x70, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3d},
	{0x8a, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4f, 0x65, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3f},
	{0x88, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x50, 0x71, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x40},
	{0xe6, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x51, 0x72, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x41},
	{0x65, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x52, 0x67, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x42},
	{0xe4, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x53, 0x5c, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x43},
	{0x50, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5b, 0x68, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4b},
	{0x51, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5c, 0x74, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4c},
	{0x4f, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5d, 0x76, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x4d},
	{0x62, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x6e, 0x6a, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5e},
	{0x63, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x6f, 0x6b, RYOS_KEY_RELATION_KEYS_TYPE_EASYZONE, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x5f},

	/* keys_extra */
	{0x39, 8,                                RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x3c, RYOS_KEY_RELATION_KEYS_TYPE_CAPSLOCK, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID},
	{0xf1, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x73, RYOS_KEY_RELATION_KEYS_TYPE_FN,       RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID},
	{0x29, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID, 0x01, RYOS_KEY_RELATION_KEYS_TYPE_NOTHING,  RYOS_KEY_RELATIONS_INDEX_INVALID, RYOS_KEY_RELATIONS_INDEX_INVALID},

	/* holes in value ranges:
	 * primary_index 0x47, 0x66, 0x6f, 0x77
	 * macro_index 0x4c, 0x4e, 0x69,
	 */
};

guint8 const ryos_layer_index_preset_all_keys[121] = {
		0x00, 0x18, 0x30, 0x48, 0x60, 0x01, 0x02, 0x0e, 0x03, 0x0f,
		0x04, 0x10, 0x05, 0x11, 0x06, 0x07, 0x08, 0x14, 0x09, 0x15,
		0x21, 0x0c, 0x0d, 0x19, 0x1a, 0x1b, 0x27, 0x1c, 0x28, 0x1d,
		0x29, 0x12, 0x1e, 0x13, 0x20, 0x2c, 0x24, 0x25, 0x31, 0x26,
		0x32, 0x33, 0x34, 0x40, 0x35, 0x2a, 0x36, 0x1f, 0x2b, 0x38,
		0x3c, 0x3d, 0x49, 0x3e, 0x4a, 0x3f, 0x4b, 0x4c, 0x41, 0x42,
		0x4e, 0x37, 0x43, 0x44, 0x54, 0x55, 0x61, 0x56, 0x62, 0x57,
		0x63, 0x58, 0x4d, 0x59, 0x5a, 0x4f, 0x5b, 0x50, 0x6c, 0x6d,
		0x6e, 0x64, 0x70, 0x65, 0x71, 0x72, 0x73, 0x67, 0x5c, 0x2d,
		0x39, 0x45, 0x51, 0x5d, 0x69, 0x75, 0x68, 0x74, 0x76, 0x0a,
		0x16, 0x0b, 0x17, 0x22, 0x2e, 0x23, 0x2f, 0x3a, 0x46, 0x3b,
		0x52, 0x5e, 0x53, 0x5f, 0x6a, 0x6b, 0x47, 0x66, 0x6f, 0x77,
		RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_main_keys[79] = {
		0x0c, 0x0d, 0x19, 0x1a, 0x1b, 0x27, 0x1c, 0x28, 0x1d, 0x29,
		0x12, 0x1e, 0x13, 0x20, 0x2c, 0x24, 0x25, 0x31, 0x26, 0x32,
		0x33, 0x34, 0x40, 0x35, 0x2a, 0x36, 0x1f, 0x2b, 0x38, 0x3c,
		0x3d, 0x49, 0x3e, 0x4a, 0x3f, 0x4b, 0x4c, 0x41, 0x42, 0x4e,
		0x37, 0x43, 0x44, 0x54, 0x55, 0x61, 0x56, 0x62, 0x57, 0x63,
		0x58, 0x4d, 0x59, 0x5a, 0x4f, 0x5b, 0x50, 0x6c, 0x6d, 0x6e,
		0x64, 0x70, 0x65, 0x71, 0x72, 0x73, 0x67, 0x5c, 0x2d, 0x39,
		0x45, 0x51, 0x5d, 0x69, 0x47, 0x66, 0x6f, 0x77,
		RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_numpad[18] = {
		0x0a, 0x16, 0x0b, 0x17, 0x22, 0x2e, 0x23, 0x2f, 0x3a, 0x46,
		0x3b, 0x52, 0x5e, 0x53, 0x5f, 0x6a, 0x6b,
		RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_f_keys[17] = {
		0x01, 0x02, 0x0e, 0x03, 0x0f, 0x04, 0x10, 0x05, 0x11, 0x06,
		0x07, 0x08, 0x14, 0x09, 0x15, 0x21,
		RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_t_keys[4] = { 0x78, 0x79, 0x7a, RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_m_keys[6] = { 0x00, 0x18, 0x30, 0x48, 0x60, RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_arrows[5] = { 0x75, 0x68, 0x74, 0x76, RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_wasd[5] = { 0x31, 0x3d, 0x49, 0x3e, RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_layer_index_preset_qwer[5] = { 0x25, 0x31, 0x26, 0x32, RYOS_LIGHT_LAYER_INDEX_INVALID };

guint8 const ryos_hid_to_layer_index[] = {
/*	   0     1     2     3     4     5     6     7     8     9     a     b     c     d     e     f */
	0xff, 0xff, 0xff, 0xff, 0x3d, 0x63, 0x62, 0x3e, 0x26, 0x4a, 0x3f, 0x4b, 0x35, 0x4c, 0x41, 0x42, /* 0 */
	0x4d, 0x58, 0x2a, 0x36, 0x25, 0x32, 0x49, 0x33, 0x40, 0x57, 0x31, 0x56, 0x34, 0x61, 0x0d, 0x19, /* 1 */
	0x1a, 0x1b, 0x27, 0x1c, 0x28, 0x1d, 0x29, 0x12, 0x44, 0x01, 0x2c, 0x24, 0x70, 0x1e, 0x13, 0x1f, /* 2 */
	0x2b, 0x38, 0x43, 0x4e, 0x37, 0x0c, 0x59, 0x5a, 0x4f, 0x3c, 0x02, 0x0e, 0x03, 0x0f, 0x04, 0x10, /* 3 */
	0x05, 0x11, 0x06, 0x07, 0x08, 0x14, 0x09, 0x15, 0x21, 0x2d, 0x39, 0x45, 0x51, 0x5d, 0x69, 0x76, /* 4 */
	0x68, 0x74, 0x75, 0x0a, 0x16, 0x0b, 0x17, 0x2f, 0x5f, 0x52, 0x5e, 0x53, 0x3a, 0x46, 0x3b, 0x22, /* 5 */
	0x2e, 0x23, 0x6a, 0x6b, 0x55, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 6 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 7 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5b, 0x71, 0x20, 0x65, 0x64, 0xff, 0xff, 0xff, 0xff, /* 8 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 9 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x18, 0x30, 0x48, 0x60, 0xff, /* a */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* b */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* c */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* d */
	0x6c, 0x54, 0x6e, 0x6d, 0x5c, 0x50, 0x72, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* e */
	0xff, 0x73, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* f */
};

static guint8 const hid_to_sdk_index[256] = {
/*    0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f */
	255, 255, 255, 255,  62,  84,  82,  64,  42,  65,  66,  67,  47,  68,  69,  70, /* 0 */
	 86,  85,  48,  49,  40,  43,  63,  44,  46,  83,  41,  81,  45,  80,  18,  19, /* 1 */
	 20,  21,  22,  23,  24,  25,  26,  27,  52,   0,  30,  39, 100,  28,  29,  50, /* 2 */
	 51, 255,  73,  71,  72,  17,  87,  88,  89,  61,   1,   2,   3,   4,   5,   6, /* 3 */
	  7,   8,   9,  10,  11,  12,  13,  14,  15,  31,  32,  33,  53,  54,  55, 107, /* 4 */
	105, 106,  91,  34,  35,  36,  37,  59,  95,  92,  93,  94,  74,  75,  76,  56, /* 5 */
	 57,  58, 108, 109,  79, 103, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* 6 */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* 7 */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* 8 */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* 9 */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  16,  38,  60,  77,  96, 255, /* a */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* b */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* c */
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* d */
	 97,  78,  99,  98, 104,  90, 101, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* e */
	255, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /* f */
};

guint8 ryos_hid_to_sdk_index(guint8 hid) {
	return hid_to_sdk_index[hid];
}

static guint8 const sdk_index_to_light_index[256] = {
/*     0     1     2     3     4     5     6     7     8     9 */
	0x01, 0x02, 0x0e, 0x03, 0x0f, 0x04, 0x10, 0x05, 0x11, 0x06, /* 0 */
	0x07, 0x08, 0x14, 0x09, 0x15, 0x21, 0x00, 0x0c, 0x0d, 0x19, /* 1 */
	0x1a, 0x1b, 0x27, 0x1c, 0x28, 0x1d, 0x29, 0x12, 0x1e, 0x13, /* 2 */
	0x2c, 0x2d, 0x39, 0x45, 0x0a, 0x16, 0x0b, 0x17, 0x18, 0x24, /* 3 */
	0x25, 0x31, 0x26, 0x32, 0x33, 0x34, 0x40, 0x35, 0x2a, 0x36, /* 4 */
	0x1f, 0x2b, 0x44, 0x51, 0x5d, 0x69, 0x22, 0x2e, 0x23, 0x2f, /* 5 */
	0x30, 0x3c, 0x3d, 0x49, 0x3e, 0x4a, 0x3f, 0x4b, 0x4c, 0x41, /* 6 */
	0x42, 0x4e, 0x37, 0x43, 0x3a, 0x46, 0x3b, 0x48, 0x54, 0x55, /* 7 */
	0x61, 0x56, 0x62, 0x57, 0x63, 0x58, 0x4d, 0x59, 0x5a, 0x4f, /* 8 */
	0x50, 0x75, 0x52, 0x5e, 0x53, 0x5f, 0x60, 0x6c, 0x6d, 0x6e, /* 9 */
	0x70, 0x72, 0x73, 0x67, 0x5c, 0x68, 0x74, 0x76, 0x6a, 0x6b, /* 10 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 11 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 12 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 13 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 14 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 15 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 16 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 17 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 18 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 19 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 20 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 21 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 22 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 23 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, /* 24 */
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,                         /* 25 */
};

guint8 ryos_sdk_index_to_light_index(guint8 sdk_index) {
	/* sdk_index is in range 0-109 */
	return sdk_index_to_light_index[sdk_index];
}
