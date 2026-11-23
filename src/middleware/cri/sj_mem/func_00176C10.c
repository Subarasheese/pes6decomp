/* compiler: ee-gcc-2.96-G0 */
/* func_003391F8 adapted from LucasPicoli/god-hand-decomp, src/cod/003391f8.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC260[];
extern const char D_003CC270[];
extern void func_00176460(const char *error, const char *detail);
extern const char D_003CC170[];
extern const char D_003CC1A0[];
void func_00176C10(SjMem *sj, int id, SjChunk *ck) {
    void (*cb)(void *obj, int ev);
    int n;
    if (sj == 0) {
        func_00176460(D_003CC260, D_003CC170);
        return;
    }
    if (sj->used == 0) {
        func_00176460(D_003CC270, D_003CC1A0);
        return;
    }
    if ((ck->len > 0) && (ck->data != 0)) {
        if (id == 0)
            goto err;
        if (id == 1) {
            n = sj->readPos - ck->len;
            sj->readPos = (n < 0) ? (0) : (n);
            n = sj->dataLen + ck->len;
            sj->dataLen = (sj->size < n) ? (sj->size) : (n);
            if (sj->readPos != (ck->data - sj->base)) {
            err:
                if (sj->cb != 0)
                    sj->cb(sj->cbobj, -3);
            }
        } else {
            cb = sj->cb;
            ck->len = 0;
            ck->data = 0;
            if (cb != 0)
                cb(sj->cbobj, -3);
        }
    }
}
