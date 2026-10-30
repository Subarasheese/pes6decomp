/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B445F0(s32, s32);
extern u32 func_00B447A0(void);
M2C_UNK func_002ECB10(s32, s32, M2C_UNK, s32);      /* extern */

void func_00B3E940(s32 arg0) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1_2;
    u32 temp_v0;
    u32 var_a0;
    u32 var_a0_2;
    u32 var_v1;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        temp_a1 = func_00B445F0((s32) M2C_FIELD(temp_v0, u8 *, 0x610), arg0) & 0xFFFF;
        var_a3 = 0;
        var_a0 = temp_v0;
loop_2:
        var_a2 = 0;
        var_v1 = var_a0;
loop_3:
        if (temp_a1 != M2C_FIELD(var_v1, u16 *, 0x620)) {
            var_a2 += 1;
            var_v1 += 2;
            if (var_a2 >= 0x10) {
                var_a3 += 1;
                var_a0 += 0x20;
                if (var_a3 >= 4) {
                    var_v1_2 = 0;
                    var_a0_2 = temp_v0;
loop_10:
                    if (temp_a1 != M2C_FIELD(var_a0_2, u16 *, 0x6A0)) {
                        var_v1_2 += 1;
                        var_a0_2 += 2;
                        if (var_v1_2 >= 8) {
                            func_002ECB10(M2C_FIELD(temp_v0, s32 *, 0x14), temp_a1, 0, var_a3);
                        } else {
                            goto loop_10;
                        }
                    } else {
                        func_002ECB10(M2C_FIELD(temp_v0, s32 *, 0x14), temp_a1, 1, var_a3);
                    }
                } else {
                    goto loop_2;
                }
            } else {
                goto loop_3;
            }
        } else {
            func_002ECB10(M2C_FIELD(temp_v0, s32 *, 0x14), temp_a1, 1, var_a3);
        }
    }
}
