/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0027B6D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00296120(u8 *, s32, s32, s32); /* extern */
extern char D_005A2A60[];

void func_00295D40(void) {
    s32 var_s1;
    u8 *var_s0;
    s32 temp_a0;

    var_s1 = 0xF;
    var_s0 = ((void *)D_005A2A60);
    do {
        temp_a0 = *(s32 *)var_s0;
        if (temp_a0 != 0) {
            func_0027B6D0(temp_a0, 0);
            if (*(s16 *)(var_s0 + 6) == 0x504) {
                func_00296120(var_s0, 0x14, 0x8C, 0);
            } else {
                func_00296120(var_s0, -1, -1, 0);
            }
        }
        var_s1 += 1;
        var_s0 += 0x60;
    } while (var_s1 < 0x14);
}
