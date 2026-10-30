/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00173E10(void *arg0) {
    s32 temp_a0;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a6;
    s32 var_a7;
    u32 temp_v1;
    u32 var_v1;
    void *var_a0;

    var_a6 = -1;
    var_a7 = 0;
    var_a0 = M2C_FIELD(arg0, void **, 0xB80);
    if (M2C_FIELD(arg0, s32 *, 0xD0C) == 0) {
        M2C_FIELD(arg0, s32 *, 0xBF8) = 0;
        M2C_FIELD(arg0, s32 *, 0xBFC) = 0;
        return;
    }
    temp_a4 = M2C_FIELD(arg0, s32 *, 0xBF4);
    var_a3 = 0;
    temp_a5 = M2C_FIELD(arg0, s32 *, 0xBF0);
    M2C_FIELD(arg0, s32 *, 0xBF8) = temp_a4;
    M2C_FIELD(arg0, s32 *, 0xBFC) = temp_a4;
    if (temp_a5 > 0) {
        if (!(M2C_FIELD(var_a0, s32 *, 4) & 0x50)) {
            var_v1 = M2C_FIELD(var_a0, u32 *, 0);
loop_8:
            if (var_v1 >= 0x80U) {
                var_a2 = 1;
                if (var_v1 >= 0xE0U) {
                    var_a2 = 2;
                    if (var_v1 >= 0xF0U) {
                        var_a2 = (var_v1 > 0xF7U) ? 0 : 3;
                    }
                }
                var_a3 += var_a2;
                var_a0 += var_a2 * 0x24;
            }
            var_a3 += 1;
            var_a0 += 0x24;
            if (var_a3 < temp_a5) {
                if (!(M2C_FIELD(var_a0, s32 *, 4) & 0x50)) {
                    var_v1 = M2C_FIELD(var_a0, u32 *, 0);
                    goto loop_8;
                }
                var_a6 = var_a3;
            }
        } else {
            var_a6 = 0;
        }
    }
    if (var_a6 >= 0) {
        temp_a5_2 = M2C_FIELD(arg0, s32 *, 0xBF0);
        M2C_FIELD(arg0, s32 *, 0xBF8) = (s32) (temp_a4 + M2C_FIELD(var_a0, s32 *, 0x1C));
        M2C_FIELD(arg0, s32 *, 0xBFC) = (s32) M2C_FIELD(var_a0, s32 *, 0x1C);
        if (var_a3 < temp_a5_2) {
loop_27:
            var_a7 = M2C_FIELD(var_a0, s32 *, 0x10);
            M2C_FIELD(arg0, s32 *, 0xBFC) = (s32) M2C_FIELD(var_a0, s32 *, 0x1C);
            if (M2C_FIELD(var_a0, s32 *, 4) & 0x50) {
                temp_v1 = M2C_FIELD(var_a0, u32 *, 0);
                if (temp_v1 >= 0x80U) {
                    var_a2_2 = 1;
                    if (temp_v1 >= 0xE0U) {
                        var_a2_2 = 2;
                        if (temp_v1 >= 0xF0U) {
                            var_a2_2 = (temp_v1 > 0xF7U) ? 0 : 3;
                        }
                    }
                    var_a3 += var_a2_2;
                    var_a0 += var_a2_2 * 0x24;
                }
                var_a3 += 1;
                var_a0 += 0x24;
                if (var_a3 < temp_a5_2) {
                    goto loop_27;
                }
                goto block_31;
            }
            if (var_a3 >= M2C_FIELD(arg0, s32 *, 0xBF0)) {
                goto block_31;
            }
        } else {
block_31:
            M2C_FIELD(arg0, s32 *, 0xBFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xBFC) + var_a7);
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x5AC) - ((M2C_FIELD(arg0, s32 *, 0x8D4) + M2C_FIELD(arg0, s32 *, 0xCF0)) * 2);
        M2C_FIELD(arg0, s32 *, 0xBFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xBFC) + temp_a4);
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xBF8);
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0xBF8) = 0;
        } else if (temp_a0 < temp_v0) {
            M2C_FIELD(arg0, s32 *, 0xBF8) = temp_a0;
        }
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xBFC);
        if (temp_v0_2 < 0) {
            M2C_FIELD(arg0, s32 *, 0xBFC) = 0;
            return;
        }
        if (temp_a0 < temp_v0_2) {
            M2C_FIELD(arg0, s32 *, 0xBFC) = temp_a0;
        }
    }
}
