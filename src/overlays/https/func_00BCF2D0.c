/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"

extern s32 D_00C3FDB0;

s32 func_00BCF2D0(s64 arg0) {
    D_00C3FDB0 &= ~((s64)(arg0 << 0x20) >> 0x20);
    return 1;
}
