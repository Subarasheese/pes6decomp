/* compiler: ee-gcc-2.96-G0 */
/* func_00338FD8 adapted from LucasPicoli/god-hand-decomp, src/cod/00338fd8.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC220[];
extern const char D_003CC230[];
extern const char D_003CC170[];
extern const char D_003CC1A0[];
extern void func_00176460(const char *error, const char *detail);
void func_001769F0(SjMem *s, int mode, int size, SjChunk *res) {
    int n;
    int pos;
    if (s == 0) {
        func_00176460(D_003CC220, D_003CC170);
        return;
    }
    if (s->used == 0) {
        func_00176460(D_003CC230, D_003CC1A0);
        return;
    }
    if (mode == 0) {
        res->len = 0;
        res->data = 0;
        return;
    }
    if (mode == 1) {
        n = s->dataLen;
        if (n >= size) {
            n = size;
        }
        res->len = n;
        pos = s->readPos;
        s->readPos = pos + n;
        res->data = s->base + pos;
        s->dataLen -= res->len;
        return;
    }
    res->len = 0;
    res->data = 0;
    if (s->cb != 0) {
        s->cb(s->cbobj, -3);
    }
}
