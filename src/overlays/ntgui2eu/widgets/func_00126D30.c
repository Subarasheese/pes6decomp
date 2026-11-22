/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00126C98(s32, s64);
extern s32 func_00165580(void *, s32, s32, s32);
extern s32 func_001B0444(s32);

extern s32 func_00126D10;

void func_00126D30(s32 arg0, s64 arg1) {
    s64 temp_s0;

    temp_s0 = (s64) (arg1 << 0x20) >> 0x20;
    if (func_001B0444((s32) temp_s0) != 0) {
        func_00165580((void *) arg0, 6, (s32) func_00126C98, (s32) temp_s0);
        func_00165580((void *) arg0, 7, (s32) &func_00126D10, 0);
    }
}
