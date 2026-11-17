/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_001EB420(void *arg0, s64 *arg1, s32 arg2) {
    s32 *src = arg0;
    s64 lo, mid;

    while (arg2 != 0) {
        arg2 -= 1;
        mid = (s32)((src[1] & ~0xF) - 1);
        lo = (s32)((src[0] & ~0xF) - 1);
        *arg1 = ((s64)src[2] << 32) | lo | (mid << 16);
        src += 4;
        arg1 += 1;
    }
}
