/* compiler: ee-gcc-2.96-G0 */
/* sjmem_IsGetChunk adapted from LucasPicoli/god-hand-decomp, src/cod/00324108.c. See
 * THIRD_PARTY.md. */
extern void func_00176460(const char *error, const char *detail);

#include "pes6/cri_stream_joint.h"

extern const char D_003CC280[];
extern const char D_003CC290[];
extern const char D_003CC170[];
extern const char D_003CC1A0[];
int func_00176D78(SjMem *stream, int lane, int requested, int *available) {
    s32 count;
    if (!stream) {
        func_00176460(D_003CC280, D_003CC170);
        return 0;
    }
    if (!stream->used) {
        func_00176460(D_003CC290, D_003CC1A0);
        return 0;
    }
    if (lane == 0)
        count = 0;
    else if (lane == 1) {
        s32 bytes = stream->dataLen;
        count = bytes < requested ? bytes : requested;
    } else {
        void (*error)(void *, s32) = stream->cb;
        count = 0;
        if (error)
            error(stream->cbobj, -3);
    }
    *available = count;
    return count == requested;
}
