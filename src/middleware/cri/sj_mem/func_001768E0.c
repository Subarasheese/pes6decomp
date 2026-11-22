/* compiler: ee-gcc-2.96-G0 */
/* func_00338EC8 adapted from LucasPicoli/god-hand-decomp, src/cod/00338ec8.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

extern const char D_003CC200[];
extern const char D_003CC210[];
extern const char D_003CC170[];
extern const char D_003CC1A0[];
extern void func_00176460(const char *error, const char *detail);
void func_001768E0(SjMem *stream) {
    if (!stream) {
        func_00176460(D_003CC200, D_003CC170);
        return;
    }
    if (!stream->used) {
        func_00176460(D_003CC210, D_003CC1A0);
        return;
    }
    {
        s32 size = stream->size;
        stream->readPos = 0;
        stream->dataLen = size;
    }
}
