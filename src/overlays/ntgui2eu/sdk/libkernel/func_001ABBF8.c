/* compiler: ee-gcc-2.96-G0 */
/* Komasia/sly2-decomp, src/lib/fde_merge.c (fde_merge). See THIRD_PARTY.md. */

typedef unsigned int size_t;
typedef unsigned int uword;
typedef int sword;
typedef int saddr;
typedef struct dwarf_fde {
    uword length;
    sword CIE_delta;
    void *pc_begin;
    uword pc_range;
} fde;
typedef struct fde_vector {
    fde **array;
    size_t count;
} fde_vector;

static inline saddr fde_compare(fde *x, fde *y) { return (saddr)x->pc_begin - (saddr)y->pc_begin; }

void func_001ABBF8(fde_vector *v1, const fde_vector *v2) {
    size_t i1, i2;
    fde *fde2;

    i2 = v2->count;
    if (i2) {
        i1 = v1->count;
        do {
            i2--;
            fde2 = v2->array[i2];
            while (i1 > 0 && fde_compare(v1->array[i1 - 1], fde2) > 0) {
                v1->array[i1 + i2] = v1->array[i1 - 1];
                i1--;
            }
            v1->array[i1 + i2] = fde2;
        } while (i2 > 0);
        v1->count += v2->count;
    }
}
