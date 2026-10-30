/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00173BE8(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0xBF0);
    if (temp_a2 == 0) {
        M2C_FIELD(arg0, s32 *, 0xBF4) = 0;
        M2C_FIELD(arg0, s32 *, 0xB84) = 0;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0xB8C);
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x5AC) - ((M2C_FIELD(arg0, s32 *, 0x8D4) + M2C_FIELD(arg0, s32 *, 0xCF0)) * 2);
    if (temp_a1 < temp_a2) {
        var_v0 = M2C_FIELD(((temp_a1 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), s32 *, 0x1C);
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xB98);
    }
    M2C_FIELD(arg0, s32 *, 0xB84) = var_v0;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0xBF4);
    temp_a2_2 = M2C_FIELD(arg0, s32 *, 0xD14);
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0xB84) + temp_a3;
    M2C_FIELD(arg0, s32 *, 0xB84) = temp_a1_2;
    if (temp_a1_2 < temp_a2_2) {
        temp_v0 = temp_a3 - (temp_a1_2 - temp_a2_2);
        M2C_FIELD(arg0, s32 *, 0xBF4) = temp_v0;
        if (temp_v0 > 0) {
            M2C_FIELD(arg0, s32 *, 0xBF4) = 0;
            M2C_FIELD(arg0, s32 *, 0xB84) = (s32) (temp_a2_2 - temp_v0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xB84) = temp_a2_2;
        return;
    }
    temp_a4 = M2C_FIELD(arg0, s32 *, 0xD18);
    temp_a2_3 = temp_a5 - temp_a4;
    if (temp_a2_3 < temp_a1_2) {
        temp_v1 = temp_a3 + M2C_FIELD(arg0, s32 *, 0xB98);
        if ((temp_v1 - temp_a4) < temp_a1_2) {
            temp_v0_2 = temp_a5 - temp_v1;
            temp_v0_3 = (temp_v0_2 >= 1) ? 0 : temp_v0_2;
            M2C_FIELD(arg0, s32 *, 0xB84) = (s32) (temp_a1_2 + temp_v0_3);
            M2C_FIELD(arg0, s32 *, 0xBF4) = (s32) (temp_a3 + temp_v0_3);
            return;
        }
        if (temp_a5 < temp_v1) {
            M2C_FIELD(arg0, s32 *, 0xB84) = temp_a2_3;
            M2C_FIELD(arg0, s32 *, 0xBF4) = (s32) (temp_a3 - (temp_a1_2 - temp_a2_3));
        }
    }
}
