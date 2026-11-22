/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

M2C_UNK func_00BB48D0(s32);
M2C_UNK func_00BC0A88(s32 *);

void func_00BB5708(s32 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_00BB48D0(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_2 != 0) {
        func_00BB48D0(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_3 != 0) {
        func_00BB48D0(temp_a0_3);
    }
    func_001C48E8(arg0, 0, 0x58);
    func_00BC0A88(arg0);
}
