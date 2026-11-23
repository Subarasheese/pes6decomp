/* compiler: ee-gcc-2.96-G0 */
/* sjrbf_IsGetChunk adapted from LucasPicoli/god-hand-decomp, src/cod/00339f00.c. See
 * THIRD_PARTY.md. */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC3D8[];
extern const char D_003CC3E8[];
extern const char D_003CC2D0[];
extern const char D_003CC300[];
extern void func_00176E78(const char *error, const char *detail);
int func_00177920(SjRbf *r, int lane, int want, int *got) {
    int n;
    int len;
    if (r == 0) {
        func_00176E78(D_003CC3D8, D_003CC2D0);
        return 0;
    }
    if (r->used == 0) {
        func_00176E78(D_003CC3E8, D_003CC300);
        return 0;
    }
    if (lane == 0) {
        n = (r->size - r->freePos) + r->extra;
        if (r->free < n)
            n = r->free;
        n = (n < want) ? (n) : (want);
    } else if (lane == 1) {
        n = (r->size - r->dataPos) + r->extra;
        if (r->data < n)
            n = r->data;
        n = (n < want) ? (n) : (want);
    } else {
        n = 0;
        if (r->err != 0)
            r->err(r->errObj, -3);
    }
    *got = n;
    return n == want;
}
