/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BCD948(s32);
M2C_UNK func_00BCDDA0(s32);
M2C_UNK func_00BCE720(s32);

s32 func_00C0D138(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x170);
    if (temp_a0 != 0) {
        func_00BCDDA0(temp_a0);
        func_00BCD948(M2C_FIELD(arg0, s32 *, 0x170));
        M2C_FIELD(arg0, s32 *, 0x170) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x16C);
    if (temp_a0_2 != 0) {
        func_00BCE720(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x16C) = 0;
    }
    return 0;
}
