/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_0019CCD0(s32, s32, s32, s32, s32);
extern char D_0019D9E8[];

int func_0019DAE0(u32 param_1, int param_2, int param_3, int param_4) {
    int value;
    u32 buffer[4];

    buffer[0] = param_1;
    value = func_0019CCD0((u32)D_0019D9E8, (int)buffer, param_2, param_3, param_4);
    return value;
}
