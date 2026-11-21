/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00BB3380(s32, s32, s32, s32, s32);

s32 func_00BB8168(s32);
s32 func_00BDFC48(s32, s32, s32, s32, s32);

s32 func_00BDFBC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_00BB8168(arg1);
    if (temp_v0 == 0) {
        func_00BB3380(0xB, 0xE4, 0xA3, 0, 0);
        return 0;
    }
    return func_00BDFC48(arg0, temp_v0, arg2, arg3, arg4);
}
