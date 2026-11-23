/* compiler: ee-gcc-2.9-G0 */
/* func_003398F8 adapted from LucasPicoli/god-hand-decomp, src/cod/003398f8.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC340[];
extern const char D_003CC350[];
extern const char D_003CC360[];
extern const char D_003CC370[];
extern const char D_003CC2D0[];
extern const char D_003CC300[];
extern void func_00176E78(const char *error, const char *detail);
void func_00177318(SjRbf *sj, int id, int nbyte, SjChunk *ck) {
    if (sj == 0) {
        func_00176E78(D_003CC340, D_003CC2D0);
        return;
    }
    if (sj->used == 0) {
        func_00176E78(D_003CC350, D_003CC300);
        return;
    }
    if (sj->size == 0) {
        func_00176E78(D_003CC360, D_003CC370);
        return;
    }
    if (id == 0) {
        ck->len = (((sj->free < ((sj->size - sj->freePos) + sj->extra))
                        ? (sj->free)
                        : ((sj->size - sj->freePos) + sj->extra)) < nbyte)
                      ? ((sj->free < ((sj->size - sj->freePos) + sj->extra))
                             ? (sj->free)
                             : ((sj->size - sj->freePos) + sj->extra))
                      : (nbyte);
        ck->data = sj->buf + sj->freePos;
        sj->freePos = (sj->freePos + ck->len) % sj->size;
        sj->free -= ck->len;
        sj->freeTaken += ck->len;
    } else if (id == 1) {
        ck->len = (((sj->data < ((sj->size - sj->dataPos) + sj->extra))
                        ? (sj->data)
                        : ((sj->size - sj->dataPos) + sj->extra)) < nbyte)
                      ? ((sj->data < ((sj->size - sj->dataPos) + sj->extra))
                             ? (sj->data)
                             : ((sj->size - sj->dataPos) + sj->extra))
                      : (nbyte);
        ck->data = sj->buf + sj->dataPos;
        sj->dataPos = (sj->dataPos + ck->len) % sj->size;
        sj->data -= ck->len;
        sj->dataTaken += ck->len;
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sj->err != 0)
            sj->err(sj->errObj, -3);
    }
}
