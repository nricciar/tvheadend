/**
 *  Transcoding
 *  Copyright (C) 2010 Andreas Öman
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "tvheadend.h"

streaming_target_t *transcoder_create(streaming_target_t *output, 
				      size_t max_resolution,
				      streaming_component_type_t vtype, 
				      streaming_component_type_t atype,
				      streaming_component_type_t stype);

void transcoder_set_network_speed(streaming_target_t *st, int speed);
void transcoder_destroy(streaming_target_t *gh);
void transcoder_init(void);
