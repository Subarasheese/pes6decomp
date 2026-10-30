/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00236870(s32, s32, s32);
s32 func_00234580(s32, s32);                        /* extern */
s32 func_00236680(s32, s32, void *);                /* extern */
extern void *D_003E77B4;

void func_0098C930(M2C_UNK arg0, s32 arg1, void *arg2) {
    s32 temp_s1;
    s32 var_a1;
    s32 var_fp;
    s32 var_s0;
    s32 var_s2;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    u8 temp_a0;
    u8 var_s3;
    void *temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a2;
    void *phi_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    var_s6 = 0;
    var_s2 = 0;
    if ((s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363) > 0) {
        var_s0 = 0;
        do {
            temp_v1 = D_003E77B4;
            var_a1 = func_00236680(var_s6 & 0xFF, var_a1, var_a2) & 0xFF;
            var_a2 = temp_v1 + var_s0;
            var_s7 = 0;
            phi_v1 = temp_v1;
            if ((s32) M2C_FIELD(var_a2, u8 *, 0x4AB8) > 0) {
                var_fp = var_a1 & 0xFF;
                do {
                    temp_a0 = M2C_FIELD(var_a2, u8 *, 0x4ABA);
                    var_s4 = 0;
                    var_s3 = 0;
                    if ((s32) temp_a0 > 0) {
                        temp_s1 = var_fp & 0xFF;
                        if ((s32) temp_a0 > 0) {
                            do {
                                if ((func_00234580(var_s4 & 0xFF, temp_s1) & 0xFF) != 0xFE) {
                                    if ((func_00236870((s32) (D_003E77B4 + 0x2974), temp_s1, var_s4 & 0xFF) & 0xFF) != 2) {
                                        temp_a0_2 = ((var_s2 & 0xFF) * 0xC) + D_003E77B4;
                                        if ((s32) M2C_FIELD(temp_a0_2, u8 *, 0x4BB1) < (var_s3 & 0xFF)) {
                                            M2C_FIELD(temp_a0_2, u8 *, 0x4BB1) = var_s3;
                                        }
                                        var_s3 = 0;
                                    } else {
                                        var_s3 = (var_s3 + 1) & 0xFF;
                                    }
                                }
                                var_s4 += 1;
                            } while (var_s4 < (s32) M2C_FIELD((var_s0 + D_003E77B4), u8 *, 0x4ABA));
                        }
                    }
                    temp_v1_2 = phi_v1 + ((var_s2 & 0xFF) * 0xC);
                    var_a1 = temp_v1_2 + 0x4BB1;
                    if ((s32) M2C_FIELD(temp_v1_2, u8 *, 0x4BB1) < (var_s3 & 0xFF)) {
                        M2C_FIELD(temp_v1_2, u8 *, 0x4BB1) = var_s3;
                    }
                    var_s2 = (var_s2 + 1) & 0xFF;
                    var_s7 += 1;
                    var_a2 = var_s0 + D_003E77B4;
                    var_fp += 1;
                    phi_v1 = D_003E77B4;
                } while (var_s7 < (s32) M2C_FIELD(var_a2, u8 *, 0x4AB8));
            }
            var_s6 += 1;
            var_s0 += 0xC;
        } while (var_s6 < (s32) M2C_FIELD(temp_v1, u8 *, 0x1363));
    }
}
