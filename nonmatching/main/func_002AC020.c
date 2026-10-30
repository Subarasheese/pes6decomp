/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002A96B0(u8);                            /* extern */
M2C_UNK func_002ACB00(void *);                      /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_002AC020(s32 arg0, void *arg1, f32 fparg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    u16 temp_v0;
    void *temp_s0;

    temp_s0 = func_002A96B0(M2C_FIELD(arg1, u8 *, 3));
    func_002ACB00(arg1);
    if (arg0 & 1) {
        if ((M2C_FIELD(temp_s0, s32 *, 0xC) & 0x20) || ((temp_f1 = M2C_FIELD(arg1, f32 *, 0x84), !(temp_f1 < 4096.0f)) && (!(temp_f1 < 8192.0f) || ((s32) M2C_FIELD(arg1, u16 *, 0x88) >= 0x2000)))) {
            return 0;
        }
        goto block_3;
    }
block_3:
    if (arg0 & 2) {
        if ((s32) M2C_FIELD(arg1, u16 *, 0x88) >= 0x3001) {
            return 0;
        }
        goto block_6;
    }
block_6:
    if (arg0 & 4) {
        temp_v0 = M2C_FIELD(arg1, u16 *, 0x88);
        if (((s32) temp_v0 < 0x1001) || ((s32) temp_v0 >= 0x7000)) {
            return 0;
        }
        goto block_9;
    }
block_9:
    if (arg0 & 8) {
        if ((s32) M2C_FIELD(arg1, u16 *, 0x88) < 0x5000) {
            return 0;
        }
        goto block_12;
    }
block_12:
    if (arg0 & 0x10) {
        if (!(M2C_FIELD(arg1, f32 *, 8) <= 2000.0f)) {
            return 0;
        }
        goto block_15;
    }
block_15:
    if (arg0 & 0x20) {
        temp_f1_2 = M2C_FIELD(arg1, f32 *, 8);
        if ((temp_f1_2 <= 4000.0f) || !(temp_f1_2 <= 14000.0f)) {
            return 0;
        }
        goto block_18;
    }
block_18:
    if (arg0 & 0x40) {
        if (M2C_FIELD(arg1, f32 *, 8) <= 14000.0f) {
            return 0;
        }
        goto block_21;
    }
block_21:
    if (arg0 & 0x80) {
        if (M2C_FIELD(arg1, f32 *, 8) <= 2000.0f) {
            return 0;
        }
        goto block_24;
    }
block_24:
    if (arg0 & 0x100) {
        temp_f1_3 = M2C_FIELD(arg1, f32 *, 8);
        if (!(temp_f1_3 <= 4000.0f) && (temp_f1_3 <= 14000.0f)) {
            return 0;
        }
        goto block_27;
    }
block_27:
    if (arg0 & 0x200) {
        if (!(M2C_FIELD(arg1, f32 *, 8) <= 14000.0f)) {
            return 0;
        }
        goto block_30;
    }
block_30:
    if (arg0 & 0x400) {
        if (!(M2C_FIELD(temp_s0, s32 *, 0xC) & 0x20)) {
            return 0;
        }
        goto block_33;
    }
block_33:
    if (arg0 & 0x800) {
        if (M2C_FIELD(temp_s0, s32 *, 0xC) & 0x20) {
            return 0;
        }
        goto block_36;
    }
block_36:
    if ((arg0 & 0x1000) && !(M2C_FIELD(arg1, f32 *, 0x80) <= fparg0)) {
        return 0;
    }
    return 1;
}
