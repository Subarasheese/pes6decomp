/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_00BABE90(s32);
M2C_UNK func_00BB4FC0(s32, void *, s32);
s32 func_00BC0778(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_00BC0A88(void *);
M2C_UNK func_00BC1288(s32);
M2C_UNK func_00BCD3E8(s32);
M2C_UNK func_00BDA038(s32);
extern s32 D_00C4048C;
extern char D_00C4E0C8[];

void func_00BD8F78(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;

    if (func_00BC0778(arg0 + 0x98, -1, 0xE, ((void *)D_00C4E0C8), 0x172) <= 0) {
        func_00BB4FC0(D_00C4048C, arg0, arg0 + 0xBC);
        func_001C48E8(arg0 + 8, 0, 8);
        func_001C48E8(arg0 + 0x14, 0, 0x30);
        func_001C48E8(arg0 + 0x48, 0, 0x20);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xA8);
        if (temp_a0 != 0) {
            func_00BC1288(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x90);
        if (temp_a0_2 != 0) {
            func_00BCD3E8(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x94);
        if (temp_a0_3 != 0) {
            func_00BABE90(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xB8);
        if (temp_a0_4 != 0) {
            func_00BDA038(temp_a0_4);
        }
        func_001C48E8(arg0, 0, 0xD0);
        func_00BC0A88(arg0);
    }
}
