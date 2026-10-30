/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001734B0(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00173608(s32);                             /* extern */
s32 func_00173628(void *, s32);                     /* extern */

void func_001733E8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = arg1 - 1;
    if ((temp_s0 >= 0) && (func_00173608(temp_s0) != 0)) {
        func_001734B0(arg0, temp_s0, 0x20, 1, 0);
    }
    temp_s0_2 = arg1 + arg2;
    if ((temp_s0_2 < M2C_FIELD(arg0, s32 *, 0xBF0)) && ((u32) temp_s0_2 < (u32) M2C_FIELD(arg0, u32 *, 0xCA0)) && (func_00173628(arg0, temp_s0_2) != 0)) {
        func_001734B0(arg0, temp_s0_2, 0x20, 1, 0);
    }
}
