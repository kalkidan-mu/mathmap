/* -*- c -*- */

/*
 * mathmap_common.h
 *
 * MathMap
 *
 * Copyright (C) 1997-2000 Mark Probst
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __MATHMAP_COMMON_H__
#define __MATHMAP_COMMON_H__

#include <glib.h>

#include "tuples.h"

#define MATHMAP_VERSION       "0.12"

void calc_ra (void);
void init_internals (void);
void update_image_internals (void);
void update_pixel_internals (void);

void write_tuple_to_pixel (tuple_t *tuple, guchar *dest);

extern double currentX, currentY, currentR, currentA, currentT;
extern double imageR, imageX, imageY, imageW, imageH;
extern double middleX, middleY;
extern int originX, originY;

extern int edge_behaviour_color, edge_behaviour_wrap, edge_behaviour_reflect;
extern int edge_behaviour_mode;

extern int intersamplingEnabled, oversamplingEnabled;

extern int outputBPP;

#endif
