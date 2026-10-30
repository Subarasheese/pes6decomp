/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(s32, s32);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
extern char D_00591E7C[];

s32 func_00AB6090(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;

    var_v0 = (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    var_s0 = arg1 & 0xFFFF;
    if (var_v0 > 0) {

    } else {
        var_v0 = -var_v0;
    }
    if (!((f32) var_v0 < 8841.0f)) {
        var_s0 = func_009B3480(arg0, M2C_FIELD(arg0, f32 *, 0xE0), 0.0f) & 0xFFFF;
        if ((func_009B30B0(arg1, var_s0) & 0xFFFF) >= 0x41) {
            temp_v1 = arg1 & 0xFFFF;
            temp_a0 = ((var_s0 & 0xFFFF) + 0x7FFF + 1) & 0xFFFF;
            if (temp_a0 != temp_v1) {
                if ((((temp_v1 - temp_a0) + 0x10000) & 0xFFFF) < 0x8001) {
                    var_v0_2 = -1;
                } else {
                    var_v0_2 = 1;
                }
                var_v0_3 = temp_a0 - (var_v0_2 << 0xE);
            } else {
                (*(s32 *)D_00591E7C) = 0;
                var_v0_3 = temp_a0 + 0x7FFF + 1;
            }
            var_s0 = var_v0_3 & 0xFFFF;
        }
    }
    var_v0_4 = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    if (var_v0_4 <= 0) {
        var_v0_4 = -var_v0_4;
    }
    if (!((f32) var_v0_4 < 13577.0f)) {
        var_s0 = func_009B3480(arg0, 0.0f, M2C_FIELD(arg0, f32 *, 0xE8)) & 0xFFFF;
        if ((func_009B30B0(arg1, var_s0) & 0xFFFF) >= 0x41) {
            temp_v1_2 = arg1 & 0xFFFF;
            temp_a0_2 = ((var_s0 & 0xFFFF) + 0x7FFF + 1) & 0xFFFF;
            if (temp_a0_2 != temp_v1_2) {
                if ((((temp_v1_2 - temp_a0_2) + 0x10000) & 0xFFFF) < 0x8001) {
                    var_v0_5 = -1;
                } else {
                    var_v0_5 = 1;
                }
                var_v0_6 = temp_a0_2 - (var_v0_5 << 0xE);
            } else {
                (*(s32 *)D_00591E7C) = 0;
                var_v0_6 = temp_a0_2 + 0x7FFF + 1;
            }
            var_s0 = var_v0_6 & 0xFFFF;
        }
    }
    return var_s0;
}
