/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00236870(s32, s32, s32);
s32 func_00229010(s32);                             /* extern */
s32 func_00234580(s32, s32);                        /* extern */
s32 func_00236680(s32, s32, void *);                /* extern */
extern void *D_003E77B4;

void func_0098CF50(M2C_UNK arg0, s32 arg1, void *arg2) {
    s32 temp_a0_2;
    s32 temp_s6;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s8 var_s2;
    u8 temp_a0;
    void *temp_v1;
    void *var_a2;
    void *phi_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    var_s7 = 0;
    var_s1 = 0;
    if ((s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363) > 0) {
        var_s0 = 0;
        do {
            temp_v1 = D_003E77B4;
            var_a1 = func_00236680(var_s7 & 0xFF, var_a1, var_a2) & 0xFF;
            var_a2 = temp_v1 + var_s0;
            var_s3 = 0;
            phi_v1 = temp_v1;
            if ((s32) M2C_FIELD(var_a2, u8 *, 0x4AB8) > 0) {
                var_s5 = var_a1 & 0xFF;
                do {
                    temp_a0 = M2C_FIELD(var_a2, u8 *, 0x4AB6);
                    var_s4 = 0;
                    var_s2 = 0;
                    if ((s32) temp_a0 > 0) {
                        temp_s6 = var_s5 & 0xFF;
                        if ((s32) temp_a0 > 0) {
                            do {
                                if ((func_00229010(func_00234580(var_s4 & 0xFF, temp_s6) & 0xFF) & 0xFF) != 0xFE) {
                                    temp_a0_2 = func_00236870((s32) (D_003E77B4 + 0x2974), temp_s6, var_s4 & 0xFF) & 0xFF;
                                    if ((temp_a0_2 != 5) && (temp_a0_2 != 1)) {
                                        var_s2 = 0;
                                    } else {
                                        var_s2 = (var_s2 + 1) & 0xFF;
                                    }
                                }
                                var_s4 += 1;
                            } while (var_s4 < (s32) M2C_FIELD((var_s0 + D_003E77B4), u8 *, 0x4AB6));
                        }
                    }
                    var_s3 += 1;
                    var_a1 = (var_s1 & 0xFF) * 0xC;
                    M2C_FIELD((phi_v1 + var_a1), s8 *, 0x4BB0) = var_s2;
                    var_s1 = (var_s1 + 1) & 0xFF;
                    var_a2 = var_s0 + D_003E77B4;
                    var_s5 += 1;
                    phi_v1 = D_003E77B4;
                } while (var_s3 < (s32) M2C_FIELD(var_a2, u8 *, 0x4AB8));
            }
            var_s7 += 1;
            var_s0 += 0xC;
        } while (var_s7 < (s32) M2C_FIELD(temp_v1, u8 *, 0x1363));
    }
}
