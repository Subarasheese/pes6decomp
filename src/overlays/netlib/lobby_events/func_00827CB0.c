/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001C3678(s32, s32, s32, s32);

int func_00827CB0(int arg0, int arg1, int arg2, int arg3) {
    int *entry;
    int value;
    u64 value2;

    value2 = (u64)(u32)arg0;
    entry = (int *)func_001C3678((int)&value2, arg1, arg2, arg3);
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = *entry;
    }
    return value;
}
