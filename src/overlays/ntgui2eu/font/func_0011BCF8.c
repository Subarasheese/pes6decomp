/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 D_005B369C[];

int func_0011BCF8(int arg0, int arg1) {
    u32 value;

    value = (u32) * (u16 *)((arg0 & 0xffffU) * 2 + D_005B369C[0]);
    if (value == 0) {
        value = arg1;
    }
    return value;
}
