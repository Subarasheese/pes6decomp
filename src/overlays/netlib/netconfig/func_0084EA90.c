/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_00272800(s32);
s16 *func_008472D0(M2C_UNK);
s32 func_008502E0(u8, u8);
extern s8 D_00592742[];
extern u8 D_008B14CD[];

void func_0084EA90(void *arg0, s32 arg1) {
    s16 temp_s2;

    D_00592742[0] = 3;
    if (!(D_008B14CD[0] & 1)) {
        temp_s2 = *func_008472D0(3);
        if (temp_s2 ==
            (func_008502E0(M2C_FIELD(arg0, u8 *, 0x12), M2C_FIELD(arg0, u8 *, 0)) & 0xFF)) {
            func_00272800(arg1 & 0xFF);
        } else {
            func_00272800(3);
        }
    } else {
        func_00272800(3);
    }
}
