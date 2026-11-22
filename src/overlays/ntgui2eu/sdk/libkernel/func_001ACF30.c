/* compiler: ee-gcc-2.96-G0 */
/* GNU GCC, frame.c and frame-dwarf2.c, via gustavocanepa/gt4-decomp. See THIRD_PARTY.md. */
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
#include "types.h"
typedef u32 size_t;
typedef struct dwarf_fde {
    u32 length;
    s32 CIE_delta;
    void *pc_begin;
    u32 pc_range;
} fde;
typedef struct frame_state {
    void *cfa;
    void *eh_ptr;
    long cfa_offset;
    long base_offset;
    long args_size;
    long reg_or_offset[122 + 1];
    unsigned short cfa_reg;
    unsigned short retaddr_column;
    char saved[122 + 1];
    char indirect;
} frame_state;

struct frame_state_internal {
    struct frame_state s;
    struct frame_state_internal *saved_state;
};
struct dwarf_cie {
    u32 length;
    s32 CIE_id;
    u8 version;
    char augmentation[0];
};
struct cie_info {
    char *augmentation;
    void *eh_ptr;
    int code_align, data_align;
    unsigned ra_regno;
};
extern fde *func_001AC708(void *);
extern void *func_001AC8B0(fde *, struct cie_info *);
extern void *func_001ACAE0(void *, struct frame_state_internal *, struct cie_info *, void **);
extern void *func_001ABB58(unsigned char *, int *);
extern void *func_001AE7D8(void *, int, size_t);
extern void *memcpy(void *, const void *, size_t);
static inline fde *next_fde(fde *p)

{
    return (fde *)(((char *)p) + p->length + sizeof(p->length));
}
static inline struct dwarf_cie *get_cie(fde *f)

{
    return ((void *)&f->CIE_delta) - f->CIE_delta;
}
struct frame_state *func_001ACF30(void *pc_target, struct frame_state *state_in)

{
    fde *f;
    void *insn, *end, *pc;
    struct cie_info info;
    struct frame_state_internal state;

    f = func_001AC708(pc_target);
    if (f == 0)
        return 0;

    insn = func_001AC8B0(f, &info);
    if (insn == 0)
        return 0;

    func_001AE7D8(&state, 0, sizeof(state));
    state.s.retaddr_column = info.ra_regno;
    state.s.eh_ptr = info.eh_ptr;

    end = next_fde((fde *)get_cie(f));
    while (insn < end)
        insn = func_001ACAE0(insn, &state, &info, 0);

    insn = ((fde *)f) + 1;

    if (info.augmentation[0] == 'z') {
        int i;
        insn = func_001ABB58(insn, &i);
        insn += i;
    }

    end = next_fde(f);
    pc = f->pc_begin;
    while (insn < end && pc <= pc_target)
        insn = func_001ACAE0(insn, &state, &info, &pc);

    memcpy(state_in, &state.s, sizeof(state.s));
    return state_in;
}
