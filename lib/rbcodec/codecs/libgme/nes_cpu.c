// Game_Music_Emu 0.6-pre. http://www.slack.net/~ant/

#include "nes_cpu.h"

#include "blargg_endian.h"

/* Copyright (C) 2003-2008 Shay Green. This module is free software; you
can redistribute it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version. This
module is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
details. You should have received a copy of the GNU Lesser General Public
License along with this module; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA */

#include "blargg_source.h"

static inline void set_code_page( struct Nes_Cpu* this, int i, void const* p )
{
	byte const* p2 = STATIC_CAST(byte const*,p) - NES_CPU_OFFSET( i * page_size );
	this->cpu_state->code_map [i] = p2;
	this->cpu_state_.code_map [i] = p2;
}

void Cpu_map_code( struct Nes_Cpu* this, addr_t start, int size, void const* data, int mirror_size )
{
	// address range must begin and end on page boundaries
	require( start % page_size == 0 );
	require( size  % page_size == 0 );
	require( start + size <= 0x10000 );
	require( mirror_size % page_size == 0 );
	
	int offset;
	for ( offset = 0; offset < size; offset += page_size )
		set_code_page( this, NES_CPU_PAGE( start + offset ),
				STATIC_CAST(char const*,data) + (offset & ((unsigned) mirror_size - 1)) );
}

void Cpu_reset( struct Nes_Cpu* this, void const* unmapped_page )
{
	check( this->cpu_state == &this->cpu_state_ );
	this->cpu_state = &this->cpu_state_;
	
	this->r.flags = irq_inhibit_mask;
	this->r.sp = 0xFF;
	this->r.pc = 0;
	this->r.a  = 0;
	this->r.x  = 0;
	this->r.y  = 0;
	
	this->cpu_state_.time = 0;
	this->cpu_state_.base = 0;
	this->irq_time = future_time;
	this->end_time = future_time;
	
	set_code_page( this, page_count, unmapped_page );
	Cpu_map_code( this, 0, 0x10000, unmapped_page, page_size );
	
	blargg_verify_byte_order();
}
