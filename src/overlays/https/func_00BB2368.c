/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BA42B0(s32);

M2C_UNK func_00BA5690(s32);
s32 func_00BC0778(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_00BC0A88(void *);
extern char D_00C4ACD0[];

void func_00BB2368(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;

    if (arg0 != NULL) {
        if (func_00BC0778(arg0 + 0x30, -1, 8, ((void *)D_00C4ACD0), 0x45) <= 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_a0 != 0) {
                func_00BA42B0(temp_a0);
            }
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_a0_2 != 0) {
                func_00BA42B0(temp_a0_2);
            }
            temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x14);
            if (temp_a0_3 != 0) {
                func_00BA42B0(temp_a0_3);
            }
            temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x18);
            if (temp_a0_4 != 0) {
                func_00BA42B0(temp_a0_4);
            }
            temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x1C);
            if (temp_a0_5 != 0) {
                func_00BA42B0(temp_a0_5);
            }
            temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x20);
            if (temp_a0_6 != 0) {
                func_00BA42B0(temp_a0_6);
            }
            temp_a0_7 = M2C_FIELD(arg0, s32 *, 0x24);
            if (temp_a0_7 != 0) {
                func_00BA42B0(temp_a0_7);
            }
            temp_a0_8 = M2C_FIELD(arg0, s32 *, 0x2C);
            if (temp_a0_8 != 0) {
                func_00BA5690(temp_a0_8);
            }
            func_00BC0A88(arg0);
        }
    }
}
