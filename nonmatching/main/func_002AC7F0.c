/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002ACD70(void *);                      /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_002AC7F0(s32 arg0, void *arg1, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f1_2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 temp_v0_3;

    func_002ACD70(arg1);
    if (arg0 & 1) {
        if ((M2C_FIELD(arg1, f32 *, 0xC) < 3328.0f) || ((s32) M2C_FIELD(arg1, u16 *, 0x20) >= 0x2000) || ((u32) M2C_FIELD(arg1, u32 *, 0x14) >= 0x2000U)) {
            return 0;
        }
        goto block_3;
    }
block_3:
    if (arg0 & 2) {
        if ((M2C_FIELD(arg1, f32 *, 0xC) < 3328.0f) || ((s32) M2C_FIELD(arg1, u16 *, 0x22) >= 0x2000) || ((u32) M2C_FIELD(arg1, u32 *, 0x18) >= 0x2000U)) {
            return 0;
        }
        goto block_6;
    }
block_6:
    if (arg0 & 4) {
        temp_a0 = M2C_FIELD(arg1, u32 *, 0x14);
        if ((s32) temp_a0 < 0) {
            var_f1 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1 = (f32) temp_a0;
        }
        if (!(var_f1 < (256.0f * fparg0)) || ((u32) M2C_FIELD(arg1, u32 *, 0x18) < temp_a0)) {
            return 0;
        }
        goto block_9;
    }
block_9:
    if (arg0 & 8) {
        temp_a0_2 = M2C_FIELD(arg1, u32 *, 0x18);
        if ((s32) temp_a0_2 < 0) {
            var_f1_2 = 2.0f * (f32) ((temp_a0_2 >> 1) | (temp_a0_2 & 1));
        } else {
            var_f1_2 = (f32) temp_a0_2;
        }
        if (!(var_f1_2 < (256.0f * fparg0)) || ((u32) M2C_FIELD(arg1, u32 *, 0x14) < temp_a0_2)) {
            return 0;
        }
        goto block_12;
    }
block_12:
    if (arg0 & 0x10) {
        temp_v0 = M2C_FIELD(arg1, u32 *, 0x14);
        temp_f1 = 256.0f * fparg0;
        if ((s32) temp_v0 >= 0) {
            var_f0 = (f32) temp_v0;
        } else {
            var_f0 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
        }
        if (var_f0 < temp_f1) {
            temp_v0_2 = M2C_FIELD(arg1, u32 *, 0x18);
            if ((s32) temp_v0_2 < 0) {
                var_f0_2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
            } else {
                var_f0_2 = (f32) temp_v0_2;
            }
            if (!(var_f0_2 < temp_f1)) {
                goto block_66;
            }
            goto block_15;
        }
block_66:
        return 0;
    }
block_15:
    if (arg0 & 0x20) {
        if (M2C_FIELD(arg1, u8 *, 0x10) == 0) {
            return 0;
        }
        goto block_18;
    }
block_18:
    if (arg0 & 0x40) {
        temp_f0 = 256.0f * fparg0;
        if (!(M2C_FIELD(arg1, f32 *, 0x24) < (temp_f0 * temp_f0))) {
            return 0;
        }
        goto block_21;
    }
block_21:
    if (arg0 & 0x80) {
        if (M2C_FIELD(arg1, f32 *, 0xC) < 3328.0f) {
            return 0;
        }
        goto block_24;
    }
block_24:
    if (arg0 & 0x100) {
        temp_v0_3 = M2C_FIELD(arg1, u8 *, 0x11);
        if ((s32) temp_v0_3 < 0) {
            var_f0_3 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
        } else {
            var_f0_3 = (f32) temp_v0_3;
        }
        if (var_f0_3 < fparg0) {
            return 0;
        }
        goto block_73;
    }
block_73:
    return 1;
}
