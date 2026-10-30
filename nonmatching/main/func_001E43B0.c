/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003D2A20[];

void func_001E43B0(void *arg0, u32 arg1) {
    s32 *var_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a4;

    if ((arg1 >= 0x41U) && (arg1 < 0x5BU)) {
        temp_v1 = M2C_FIELD(((arg1 * 4) + M2C_FIELD(arg0, s32 *, 0)), s32 *, -0x104);
        M2C_FIELD(arg0, s32 *, 4) = temp_v1;
        if (temp_v1 != 0) {
            M2C_FIELD(arg0, s8 *, 0x10) = 2;
        }
        return;
    }
    if (arg1 >= 0x61U) {
        if (arg1 < 0x7BU) {
            temp_v1_2 = M2C_FIELD(((arg1 * 4) + M2C_FIELD(arg0, s32 *, 0)), s32 *, -0x11C);
            M2C_FIELD(arg0, s32 *, 4) = temp_v1_2;
            if (temp_v1_2 != 0) {
                M2C_FIELD(arg0, s8 *, 0x10) = 2;
            }
            return;
        }
        goto block_7;
    }
block_7:
    var_a4 = 0;
    var_a3 = ((void *)D_003D2A20);
loop_8:
    if (arg1 != *var_a3) {
        var_a3 += 4;
        var_a4 += 1;
        if (*var_a3 == -1) {
            return;
        }
        goto loop_8;
    }
    temp_v1_3 = M2C_FIELD(((var_a4 * 4) + M2C_FIELD(arg0, s32 *, 0)), s32 *, 0xD0);
    M2C_FIELD(arg0, s32 *, 4) = temp_v1_3;
    if (temp_v1_3 != 0) {
        M2C_FIELD(arg0, s8 *, 0x10) = 2;
    }
}
