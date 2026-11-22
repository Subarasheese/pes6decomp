/* compiler: ee-gcc-2.96-G0 */
/* Komasia/sly2-decomp, src/lib/count_fdes.c (count_fdes). See THIRD_PARTY.md. */

typedef unsigned int uword;
typedef int sword;
typedef unsigned int size_t;
typedef struct dwarf_fde {
    uword length;
    sword CIE_delta;
    void *pc_begin;
    uword pc_range;
} fde;

static inline fde *next_fde(fde *p) { return (fde *)((char *)p + p->length + sizeof(p->length)); }

size_t func_001AC478(fde *this_fde) {
    size_t count;
    for (count = 0; this_fde->length != 0; this_fde = next_fde(this_fde)) {
        if (this_fde->CIE_delta == 0 || this_fde->pc_begin == 0)
            continue;
        ++count;
    }
    return count;
}
