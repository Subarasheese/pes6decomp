/* compiler: ee-gcc-2.96-G0 */
extern "C" {
/* Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
   Contributed by Jason Merrill <jason@cygnus.com>.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
/* GNU GCC DWARF frame.c. See THIRD_PARTY.md. */
#include "types.h"
struct FrameObject {
    void *pc_begin, *pc_end, *fde_begin, *fde_array;
    u32 count;
    struct FrameObject *next;
};
extern struct FrameObject *D_01208850;
extern s32 D_005CAC24;
extern s32 func_0019B160(s32 semaphore), func_0019B140(s32 semaphore);
void func_001AC268(void *begin, struct FrameObject *object) {
    object->fde_begin = begin;
    object->pc_end = 0;
    object->pc_begin = 0;
    object->fde_array = 0;
    object->count = 0;
    func_0019B160(D_005CAC24);
    object->next = D_01208850;
    D_01208850 = object;
    func_0019B140(D_005CAC24);
}
}
