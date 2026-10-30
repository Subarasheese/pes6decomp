/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
u8 func_002355C0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    u8 var_s1;
    void *temp_a7;
    void *temp_s0;
    void *temp_s1_2;
    void *temp_s2;

    if (func_00231240() == 1) {
        return 0U;
    }
    temp_s1_2 = func_00229460();
    if (func_00231240() == 1) {
        goto block_7;
    }
    if (temp_s1_2 != NULL) {
        var_s1 = M2C_FIELD(temp_s1_2, u8 *, 0x16F1);
    } else {
block_7:
        var_s1 = 0;
    }
    temp_s2 = func_00229460();
    if (func_00231240() == 1) {
        return 0xFFU;
    }
    if (temp_s2 != NULL) {
        temp_s3 = var_s1 & 0xFF;
        if (temp_s3 < (s32) M2C_FIELD(temp_s2, u8 *, 0x1363)) {
            temp_s1 = arg0 & 0xFF;
            if (temp_s1 < (s32) M2C_FIELD(((temp_s3 * 0xC) + temp_s2), u8 *, 0x4AC1)) {
                var_s4 = 0;
                temp_s0 = func_00229460();
                if (func_00231240() == 1) {
                    var_v0 = 0;
                } else if (temp_s0 == NULL) {
                    var_v0 = 0;
                } else {
                    if ((temp_s3 > 0) && (temp_s3 < 0x14)) {
                        var_v1 = 0;
                        if (temp_s3 > 0) {
                            if ((u32) (temp_s3 & 0xFF) >= 9U) {
                                do {
                                    temp_a1 = (var_v1 & 0xFF) * 3;
                                    var_v1 = (var_v1 + 8) & 0xFF;
                                    temp_a7 = temp_s0 + (temp_a1 * 4);
                                    var_s4 = (((((((((((((((var_s4 + M2C_FIELD(temp_a7, u8 *, 0x4AC1)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4ACD)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4AD9)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4AE5)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4AF1)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4AFD)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4B09)) & 0xFF) + M2C_FIELD(temp_a7, u8 *, 0x4B15)) & 0xFF;
                                } while (var_v1 < (temp_s3 - 8));
                            }
                            if ((var_v1 & 0xFF) < temp_s3) {
                                do {
                                    temp_a0 = var_v1 & 0xFF;
                                    var_v1 = (var_v1 + 1) & 0xFF;
                                    var_s4 = (var_s4 + M2C_FIELD((temp_s0 + (temp_a0 * 0xC)), u8 *, 0x4AC1)) & 0xFF;
                                } while (var_v1 < temp_s3);
                            }
                        }
                    }
                    var_v0 = var_s4 & 0xFF;
                }
                return M2C_FIELD(((var_v0 & 0xFF) + (temp_s1 + temp_s2)), u8 *, 0x71);
            }
            return 0xFFU;
        }
        return 0xFFU;
    }
    return 0xFFU;
}
