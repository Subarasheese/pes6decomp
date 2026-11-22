/* compiler: ee-gcc-2.9-G0 */
/* func_00339108 adapted from LucasPicoli/god-hand-decomp, src/cod/00339108.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC240[];
extern const char D_003CC250[];
extern void func_00176460(const char *error, const char *detail);
extern const char D_003CC170[];
extern const char D_003CC1A0[];
void func_00176B20(SjMem *sj, int id, SjChunk *ck) {
    void (*cb)(void *obj, int ev);
    if (sj == 0) {
        func_00176460(D_003CC240, D_003CC170);
        return;
    }
    if (sj->used == 0) {
        func_00176460(D_003CC250, D_003CC1A0);
        return;
    }
    if ((((ck->len > 0) && (ck->data != 0)) && (id != 0)) && (id != 1)) {
        cb = sj->cb;
        ck->len = 0;
        ck->data = 0;
        if (cb != 0)
            cb(sj->cbobj, -3);
    }
}
