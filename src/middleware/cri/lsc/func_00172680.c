/* compiler: ee-gcc-2.96-G0 */
/* Patt92/recvx-native, src/cri/mwlib/ee/lib/libadxe/lsc.c (LSC_SetFlowLimit). See THIRD_PARTY.md.
 */
#include "types.h"
typedef struct {
    u8 reserved00[0x14];
    s32 minimum, capacity;
} StreamCache;
extern const char D_003CB1B0[], D_003CB1E0[];
extern void LSC_CallErrFunc(const char *format, ...);
void func_00172680(StreamCache *stream, s32 minimum) {
    if (!stream) {
        LSC_CallErrFunc(D_003CB1B0);
        return;
    }
    if (minimum < 0 || minimum > stream->capacity) {
        LSC_CallErrFunc(D_003CB1E0, minimum);
        return;
    }
    stream->minimum = minimum;
}
