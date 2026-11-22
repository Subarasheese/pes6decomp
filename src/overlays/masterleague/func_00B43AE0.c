/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_003EAE6C;

void func_00B43AE0(s16 arg0, s32 arg1, s32 arg2) {
    if ((D_003EAE6C != 0)) {
        if (((arg2 & 0xFF) < 0x10)) {
            ((s16 *)((((arg2 & 0xFF) << 1) + (((arg1 & 0xFF) << 5) + D_003EAE6C))))[0x310] = arg0;
        } else {
            ((s16 *)((((arg2 & 0xFF) << 1) + D_003EAE6C)))[0x340] = arg0;
        }
    }
    return;
}
