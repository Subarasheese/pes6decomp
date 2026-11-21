/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001C3678(s32, s32, s32, s32);

int func_00827C30(int arg0, int arg1, int arg2, int arg3) {
    int value;
    u64 value2;

    value2 = (u64)(u32)arg0;
    value = func_001C3678((int)&value2, arg1, arg2, arg3);
    if (value == 0) {
        value = 0;
    } else {
        value = *(int *)(value + 8);
    }
    return value;
}
