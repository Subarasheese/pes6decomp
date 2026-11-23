/* compiler: ee-gcc-2.96-G0 */
/* SjRbf_ungetChunk adapted from LucasPicoli/god-hand-decomp, src/cod/00324950.c. See
 * THIRD_PARTY.md. */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC370[];
extern const char D_003CC3A8[];
extern const char D_003CC3B8[];
extern const char D_003CC3C8[];
extern const char D_003CC2D0[];
extern const char D_003CC300[];
extern void func_00176E78(const char *error, const char *detail);
void func_001776D8(SjRbf *sj, int id, SjChunk *ck) {
    int size;
    int len;
    s8 *data;
    int pos;
    if (sj == 0) {
        func_00176E78(D_003CC3A8, D_003CC2D0);
        return;
    }
    if (sj->used == 0) {
        func_00176E78(D_003CC3B8, D_003CC300);
        return;
    }
    size = sj->size;
    if (size == 0) {
        func_00176E78(D_003CC3C8, D_003CC370);
        return;
    }
    len = ck->len;
    if (len <= 0)
        return;
    data = ck->data;
    if (data == 0)
        return;
    if (id == 0) {
        pos = ((sj->freePos + size) - len) % size;
        if (pos == ((data - sj->buf) % size)) {
            sj->freePos = pos;
            sj->free += ck->len;
        } else if (sj->err != 0) {
            sj->err(sj->errObj, -3);
        }
        sj->freeTaken -= ck->len;
    } else if (id == 1) {
        pos = ((sj->dataPos + size) - len) % size;
        if (pos == ((data - sj->buf) % size)) {
            sj->dataPos = pos;
            sj->data += ck->len;
        } else if (sj->err != 0) {
            sj->err(sj->errObj, -3);
        }
        sj->dataTaken -= ck->len;
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sj->err != 0)
            sj->err(sj->errObj, -3);
    }
}
