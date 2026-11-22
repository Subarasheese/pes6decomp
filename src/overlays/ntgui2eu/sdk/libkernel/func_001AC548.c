/* compiler: ee-gcc-2.96-G0 */
/* Adapted from gt4-decomp, src/runtime/unit_0059BE80/search_fdes.c.
 * MIT licence. See THIRD_PARTY.md. */
/* GCC runtime (gcc 2000-10-03 snapshot, libgcc.a): search_fdes (frame.c).
 * licence: gcc-runtime (GPL with the GCC runtime exception, see THIRD_PARTY.md) */
/* libgcc frame-dwarf2.c search_fdes: find the FDE whose range holds pc. */
typedef unsigned int uword;
typedef int sword;
typedef unsigned int uaddr;

typedef struct dwarf_fde {
    uword length;
    sword CIE_delta;
    void *pc_begin;
    uaddr pc_range;
} __attribute__((packed, aligned(__alignof__(void *)))) fde;

static inline fde *next_fde(fde *f) {
    return (fde *)((char *)f + f->length + sizeof(f->length));
}

fde *func_001AC548(fde *this_fde, void *pc) {
    for (; this_fde->length != 0; this_fde = next_fde(this_fde)) {
        if (this_fde->CIE_delta == 0 || this_fde->pc_begin == 0)
            continue;
        if ((uaddr)((char *)pc - (char *)this_fde->pc_begin) < this_fde->pc_range)
            return this_fde;
    }
    return 0;
}
