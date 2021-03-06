/*
File:       icns_colormaps.h
Copyright (C) 2001-2012 Mathew Eis <mathew@eisbox.net>
Copyright (C) 2004 Brion Vibber <brion@pobox.com>
Copyright (C) 2007 Lyonel Vincent <lyonel@ezix.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.
*/

#ifndef _COLORMAPS_H_
#define	_COLORMAPS_H_	1

#include "icns.h"

typedef struct icns_colormap_rgb_t
{
  icns_byte_t r;
  icns_byte_t g;
  icns_byte_t b;
} icns_colormap_rgb_t;


static const icns_colormap_rgb_t icns_colormap_4[] =
{
   {0xFF, 0xFF, 0xFF},
   {0xFC, 0xF3, 0x05},
   {0xFF, 0x64, 0x02},
   {0xDD, 0x08, 0x06},
   {0xF2, 0x08, 0x84},
   {0x46, 0x00, 0xA5},
   {0x00, 0x00, 0xD4},
   {0x02, 0xAB, 0xEA},
   {0x1F, 0xB7, 0x14},
   {0x00, 0x64, 0x11},
   {0x56, 0x2C, 0x05},
   {0x90, 0x71, 0x3A},
   {0xC0, 0xC0, 0xC0},
   {0x80, 0x80, 0x80},
   {0x40, 0x40, 0x40},
   {0x00, 0x00, 0x00}
};

static const icns_colormap_rgb_t icns_colormap_8[] =
{
   {0xFF, 0xFF, 0xFF},
   {0xFF, 0xFF, 0xCC},
   {0xFF, 0xFF, 0x99},
   {0xFF, 0xFF, 0x66},
   {0xFF, 0xFF, 0x33},
   {0xFF, 0xFF, 0x00},
   {0xFF, 0xCC, 0xFF},
   {0xFF, 0xCC, 0xCC},
   {0xFF, 0xCC, 0x99},
   {0xFF, 0xCC, 0x66},
   {0xFF, 0xCC, 0x33},
   {0xFF, 0xCC, 0x00},
   {0xFF, 0x99, 0xFF},
   {0xFF, 0x99, 0xCC},
   {0xFF, 0x99, 0x99},
   {0xFF, 0x99, 0x66},
   {0xFF, 0x99, 0x33},
   {0xFF, 0x99, 0x00},
   {0xFF, 0x66, 0xFF},
   {0xFF, 0x66, 0xCC},
   {0xFF, 0x66, 0x99},
   {0xFF, 0x66, 0x66},
   {0xFF, 0x66, 0x33},
   {0xFF, 0x66, 0x00},
   {0xFF, 0x33, 0xFF},
   {0xFF, 0x33, 0xCC},
   {0xFF, 0x33, 0x99},
   {0xFF, 0x33, 0x66},
   {0xFF, 0x33, 0x33},
   {0xFF, 0x33, 0x00},
   {0xFF, 0x00, 0xFF},
   {0xFF, 0x00, 0xCC},
   {0xFF, 0x00, 0x99},
   {0xFF, 0x00, 0x66},
   {0xFF, 0x00, 0x33},
   {0xFF, 0x00, 0x00},
   {0xCC, 0xFF, 0xFF},
   {0xCC, 0xFF, 0xCC},
   {0xCC, 0xFF, 0x99},
   {0xCC, 0xFF, 0x66},
   {0xCC, 0xFF, 0x33},
   {0xCC, 0xFF, 0x00},
   {0xCC, 0xCC, 0xFF},
   {0xCC, 0xCC, 0xCC},
   {0xCC, 0xCC, 0x99},
   {0xCC, 0xCC, 0x66},
   {0xCC, 0xCC, 0x33},
   {0xCC, 0xCC, 0x00},
   {0xCC, 0x99, 0xFF},
   {0xCC, 0x99, 0xCC},
   {0xCC, 0x99, 0x99},
   {0xCC, 0x99, 0x66},
   {0xCC, 0x99, 0x33},
   {0xCC, 0x99, 0x00},
   {0xCC, 0x66, 0xFF},
   {0xCC, 0x66, 0xCC},
   {0xCC, 0x66, 0x99},
   {0xCC, 0x66, 0x66},
   {0xCC, 0x66, 0x33},
   {0xCC, 0x66, 0x00},
   {0xCC, 0x33, 0xFF},
   {0xCC, 0x33, 0xCC},
   {0xCC, 0x33, 0x99},
   {0xCC, 0x33, 0x66},
   {0xCC, 0x33, 0x33},
   {0xCC, 0x33, 0x00},
   {0xCC, 0x00, 0xFF},
   {0xCC, 0x00, 0xCC},
   {0xCC, 0x00, 0x99},
   {0xCC, 0x00, 0x66},
   {0xCC, 0x00, 0x33},
   {0xCC, 0x00, 0x00},
   {0x99, 0xFF, 0xFF},
   {0x99, 0xFF, 0xCC},
   {0x99, 0xFF, 0x99},
   {0x99, 0xFF, 0x66},
   {0x99, 0xFF, 0x33},
   {0x99, 0xFF, 0x00},
   {0x99, 0xCC, 0xFF},
   {0x99, 0xCC, 0xCC},
   {0x99, 0xCC, 0x99},
   {0x99, 0xCC, 0x66},
   {0x99, 0xCC, 0x33},
   {0x99, 0xCC, 0x00},
   {0x99, 0x99, 0xFF},
   {0x99, 0x99, 0xCC},
   {0x99, 0x99, 0x99},
   {0x99, 0x99, 0x66},
   {0x99, 0x99, 0x33},
   {0x99, 0x99, 0x00},
   {0x99, 0x66, 0xFF},
   {0x99, 0x66, 0xCC},
   {0x99, 0x66, 0x99},
   {0x99, 0x66, 0x66},
   {0x99, 0x66, 0x33},
   {0x99, 0x66, 0x00},
   {0x99, 0x33, 0xFF},
   {0x99, 0x33, 0xCC},
   {0x99, 0x33, 0x99},
   {0x99, 0x33, 0x66},
   {0x99, 0x33, 0x33},
   {0x99, 0x33, 0x00},
   {0x99, 0x00, 0xFF},
   {0x99, 0x00, 0xCC},
   {0x99, 0x00, 0x99},
   {0x99, 0x00, 0x66},
   {0x99, 0x00, 0x33},
   {0x99, 0x00, 0x00},
   {0x66, 0xFF, 0xFF},
   {0x66, 0xFF, 0xCC},
   {0x66, 0xFF, 0x99},
   {0x66, 0xFF, 0x66},
   {0x66, 0xFF, 0x33},
   {0x66, 0xFF, 0x00},
   {0x66, 0xCC, 0xFF},
   {0x66, 0xCC, 0xCC},
   {0x66, 0xCC, 0x99},
   {0x66, 0xCC, 0x66},
   {0x66, 0xCC, 0x33},
   {0x66, 0xCC, 0x00},
   {0x66, 0x99, 0xFF},
   {0x66, 0x99, 0xCC},
   {0x66, 0x99, 0x99},
   {0x66, 0x99, 0x66},
   {0x66, 0x99, 0x33},
   {0x66, 0x99, 0x00},
   {0x66, 0x66, 0xFF},
   {0x66, 0x66, 0xCC},
   {0x66, 0x66, 0x99},
   {0x66, 0x66, 0x66},
   {0x66, 0x66, 0x33},
   {0x66, 0x66, 0x00},
   {0x66, 0x33, 0xFF},
   {0x66, 0x33, 0xCC},
   {0x66, 0x33, 0x99},
   {0x66, 0x33, 0x66},
   {0x66, 0x33, 0x33},
   {0x66, 0x33, 0x00},
   {0x66, 0x00, 0xFF},
   {0x66, 0x00, 0xCC},
   {0x66, 0x00, 0x99},
   {0x66, 0x00, 0x66},
   {0x66, 0x00, 0x33},
   {0x66, 0x00, 0x00},
   {0x33, 0xFF, 0xFF},
   {0x33, 0xFF, 0xCC},
   {0x33, 0xFF, 0x99},
   {0x33, 0xFF, 0x66},
   {0x33, 0xFF, 0x33},
   {0x33, 0xFF, 0x00},
   {0x33, 0xCC, 0xFF},
   {0x33, 0xCC, 0xCC},
   {0x33, 0xCC, 0x99},
   {0x33, 0xCC, 0x66},
   {0x33, 0xCC, 0x33},
   {0x33, 0xCC, 0x00},
   {0x33, 0x99, 0xFF},
   {0x33, 0x99, 0xCC},
   {0x33, 0x99, 0x99},
   {0x33, 0x99, 0x66},
   {0x33, 0x99, 0x33},
   {0x33, 0x99, 0x00},
   {0x33, 0x66, 0xFF},
   {0x33, 0x66, 0xCC},
   {0x33, 0x66, 0x99},
   {0x33, 0x66, 0x66},
   {0x33, 0x66, 0x33},
   {0x33, 0x66, 0x00},
   {0x33, 0x33, 0xFF},
   {0x33, 0x33, 0xCC},
   {0x33, 0x33, 0x99},
   {0x33, 0x33, 0x66},
   {0x33, 0x33, 0x33},
   {0x33, 0x33, 0x00},
   {0x33, 0x00, 0xFF},
   {0x33, 0x00, 0xCC},
   {0x33, 0x00, 0x99},
   {0x33, 0x00, 0x66},
   {0x33, 0x00, 0x33},
   {0x33, 0x00, 0x00},
   {0x00, 0xFF, 0xFF},
   {0x00, 0xFF, 0xCC},
   {0x00, 0xFF, 0x99},
   {0x00, 0xFF, 0x66},
   {0x00, 0xFF, 0x33},
   {0x00, 0xFF, 0x00},
   {0x00, 0xCC, 0xFF},
   {0x00, 0xCC, 0xCC},
   {0x00, 0xCC, 0x99},
   {0x00, 0xCC, 0x66},
   {0x00, 0xCC, 0x33},
   {0x00, 0xCC, 0x00},
   {0x00, 0x99, 0xFF},
   {0x00, 0x99, 0xCC},
   {0x00, 0x99, 0x99},
   {0x00, 0x99, 0x66},
   {0x00, 0x99, 0x33},
   {0x00, 0x99, 0x00},
   {0x00, 0x66, 0xFF},
   {0x00, 0x66, 0xCC},
   {0x00, 0x66, 0x99},
   {0x00, 0x66, 0x66},
   {0x00, 0x66, 0x33},
   {0x00, 0x66, 0x00},
   {0x00, 0x33, 0xFF},
   {0x00, 0x33, 0xCC},
   {0x00, 0x33, 0x99},
   {0x00, 0x33, 0x66},
   {0x00, 0x33, 0x33},
   {0x00, 0x33, 0x00},
   {0x00, 0x00, 0xFF},
   {0x00, 0x00, 0xCC},
   {0x00, 0x00, 0x99},
   {0x00, 0x00, 0x66},
   {0x00, 0x00, 0x33},
   {0xEE, 0x00, 0x00},
   {0xDD, 0x00, 0x00},
   {0xBB, 0x00, 0x00},
   {0xAA, 0x00, 0x00},
   {0x88, 0x00, 0x00},
   {0x77, 0x00, 0x00},
   {0x55, 0x00, 0x00},
   {0x44, 0x00, 0x00},
   {0x22, 0x00, 0x00},
   {0x11, 0x00, 0x00},
   {0x00, 0xEE, 0x00},
   {0x00, 0xDD, 0x00},
   {0x00, 0xBB, 0x00},
   {0x00, 0xAA, 0x00},
   {0x00, 0x88, 0x00},
   {0x00, 0x77, 0x00},
   {0x00, 0x55, 0x00},
   {0x00, 0x44, 0x00},
   {0x00, 0x22, 0x00},
   {0x00, 0x11, 0x00},
   {0x00, 0x00, 0xEE},
   {0x00, 0x00, 0xDD},
   {0x00, 0x00, 0xBB},
   {0x00, 0x00, 0xAA},
   {0x00, 0x00, 0x88},
   {0x00, 0x00, 0x77},
   {0x00, 0x00, 0x55},
   {0x00, 0x00, 0x44},
   {0x00, 0x00, 0x22},
   {0x00, 0x00, 0x11},
   {0xEE, 0xEE, 0xEE},
   {0xDD, 0xDD, 0xDD},
   {0xBB, 0xBB, 0xBB},
   {0xAA, 0xAA, 0xAA},
   {0x88, 0x88, 0x88},
   {0x77, 0x77, 0x77},
   {0x55, 0x55, 0x55},
   {0x44, 0x44, 0x44},
   {0x22, 0x22, 0x22},
   {0x11, 0x11, 0x11},
   {0x00, 0x00, 0x00}
};

#endif /*_COLORMAPS_H_ */
