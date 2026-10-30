/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099BFB0(void *arg0, s32 *arg1) {
    u8 spC;
    u8 spD;
    s32 temp_a5;
    s32 temp_v0_2;
    s32 var_a4;
    s32 var_v0;
    s32 var_v0_2;
    u64 temp_a3_2;
    u8 *var_v1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    var_v1 = &spC;
    var_v0_2 = 2;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0_2 -= 1;
            var_v1 += 1;
        } while (var_v0_2 != 0);
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    if (((u64) ((s64) temp_v1 << 0x3D) >> 0x3F) == 0) {
        spC = M2C_FIELD(arg0, u8 *, 0xB) + M2C_FIELD(arg0, u8 *, 0xC);
        spD = M2C_FIELD(arg0, u8 *, 0x10) + M2C_FIELD(arg0, u8 *, 0x11);
    } else {
        temp_v0 = (M2C_FIELD(arg0, u8 *, 7) + M2C_FIELD(arg0, u8 *, 8)) & 0xFF;
        temp_t2 = (M2C_FIELD(arg0, u8 *, 9) + M2C_FIELD(arg0, u8 *, 0xA)) & 0xFF;
        if (((u64) ((s64) temp_v1 << 0x38) >> 0x3F) != 0) {
            spC = (temp_v0 & 0xFF) + ((M2C_FIELD(arg0, u8 *, 0xB) + M2C_FIELD(arg0, u8 *, 0xC)) & 0xFF & 0xFF);
            spD = (temp_t2 & 0xFF) + ((M2C_FIELD(arg0, u8 *, 0x10) + M2C_FIELD(arg0, u8 *, 0x11)) & 0xFF & 0xFF);
        } else if (((u64) ((s64) temp_v1 << 0x39) >> 0x3F) != 0) {
            spC = temp_v0;
            spD = temp_t2;
        }
    }
    if (spC == spD) {
        temp_t0 = M2C_FIELD(arg0, u8 *, 0x16);
        if ((((u64) ((s64) temp_t0 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_t0 << 0x38) >> 0x3F) == 0)) {
            var_v0 = 7;
        } else {
            temp_v0_2 = (M2C_FIELD(arg0, u8 *, 0xD) & 0xFF) + (M2C_FIELD(arg0, u8 *, 0xE) & 0xFF);
            temp_a5 = (M2C_FIELD(arg0, u8 *, 0x12) & 0xFF) + (M2C_FIELD(arg0, u8 *, 0x13) & 0xFF);
            spC += temp_v0_2 & 0xFF;
            temp_v1_2 = spD + (temp_a5 & 0xFF);
            spD = temp_v1_2;
            if (spC != temp_v1_2) {
                var_v0 = 2;
            } else if ((M2C_FIELD(arg0, u8 *, 0xF) & 0xFF) != (M2C_FIELD(arg0, u8 *, 0x14) & 0xFF)) {
                spC = M2C_FIELD(arg0, u8 *, 0xF);
                var_v0 = 3;
                spD = M2C_FIELD(arg0, u8 *, 0x14);
            } else {
                temp_a3 = M2C_FIELD(arg0, u8 *, 0x16);
                if (((u64) ((s64) temp_a3 << 0x3D) >> 0x3F) == 1) {
                    if (((u64) ((s64) temp_a3 << 0x3C) >> 0x3F) == 1) {
                        if (temp_v0_2 != temp_a5) {
                            var_v0 = 4;
                        } else if (temp_v0_2 != 0) {
                            var_v0 = 6;
                        } else {
                            var_v0 = 4;
                        }
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    goto block_28;
                }
            }
        }
    } else {
block_28:
        var_v0 = 0;
    }
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x16);
    var_a4 = 1;
    temp_a3_2 = (u64) ((s64) temp_a2 << 0x3D) >> 0x3F;
    if ((temp_a3_2 == 1) && (((u64) ((s64) temp_a2 << 0x38) >> 0x3F) != 0)) {
        if (!(M2C_FIELD(arg0, u8 *, 0x17) & 1)) {
            var_a4 = 0;
        }
    } else if ((temp_a3_2 == 0) && (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x3A) >> 0x3F) != 0)) {
        if (M2C_FIELD(arg0, u8 *, 0x17) & 1) {
            var_a4 = 1;
        } else {
            var_a4 = 0;
        }
    } else if ((s32) spD < (s32) spC) {
        var_a4 = 0;
    } else if ((s32) spC < (s32) spD) {
        var_a4 = 1;
    } else {
        var_a4 = -1;
    }
    if ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x17) << 0x3C) >> 0x3F) == 1) && (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x38) >> 0x3F) != 0) && (temp_a3_2 == 1)) {
        var_v0 = 0;
    }
    if (arg1 != NULL) {
        *arg1 = var_a4;
    }
    return var_v0;
}
