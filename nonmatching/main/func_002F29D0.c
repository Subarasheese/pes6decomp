/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F17A0(s32, s32, s32, s32, s32);
extern unsigned char func_002F1410(void *);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
s32 func_002F29D0(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 sp78;
    f32 sp7C;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 *var_v1;
    s32 var_s1;
    s32 var_v0;
    void *var_s0;

    var_v0 = 8;
    var_v1 = &sp78;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (M2C_FIELD(arg0, s8 *, 0x490) != 0) {
        func_002F17A0((s32) arg0, 2, (s32) &sp78, arg1, arg2);
    }
    sp78 = 0;
    temp_f1 = M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x498);
    sp7C = temp_f1;
    if (M2C_FIELD(arg0, s8 *, 0x491) != 0) {
        if (M2C_FIELD(arg0, s8 *, 0x490) != 0) {
            sp7C = temp_f1 + 6.0f;
        }
        func_002F17A0((s32) (arg0 + 0x48), 8, (s32) &sp78, arg1, arg2);
    }
    sp78 = 0;
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x49C);
    sp7C = temp_f1_2;
    if (M2C_FIELD(arg0, u8 *, 0x493) == 0) {
        if (M2C_FIELD(arg0, s8 *, 0x492) != 0) {
            if (M2C_FIELD(arg0, s8 *, 0x490) == 0) {
                if (M2C_FIELD(arg0, s8 *, 0x491) == 0) {
                    var_f0 = temp_f1_2 + 3.0f;
                } else {
                    goto block_23;
                }
            } else {
block_23:
                var_f0 = sp7C + 17.0f;
            }
            sp7C = var_f0;
            var_s1 = 0;
            var_s0 = arg0;
            do {
                if (func_002F1410(var_s0 + 0x168) != 0) {
                    sp78 = 0x41000000;
                    func_002F17A0((s32) (var_s0 + 0x168), 1, (s32) &sp78, arg1, arg2);
                    sp7C = 9.0f + M2C_FIELD(arg1, f32 *, 4);
                }
                var_s1 += 1;
                var_s0 += 0x4C;
            } while (var_s1 < 0xA);
        }
    } else {
        if (M2C_FIELD(arg0, s8 *, 0x490) == 0) {
            if (M2C_FIELD(arg0, s8 *, 0x491) == 0) {
                var_f0_2 = temp_f1_2 - 2.0f;
            } else {
                goto block_15;
            }
        } else {
block_15:
            var_f0_2 = sp7C + 12.0f;
        }
        sp7C = var_f0_2;
        temp_f0 = sp7C + 26.0f;
        sp7C = temp_f0;
        M2C_FIELD(arg1, f32 *, 4) = temp_f0;
    }
    sp78 = 0;
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x4A0);
    sp7C = temp_f1_3;
    if (M2C_FIELD(arg0, u8 *, 0x493) == 0) {
        if (M2C_FIELD(arg0, s8 *, 0x492) != 0) {
            var_f0_3 = temp_f1_3 + 3.0f;
            goto block_35;
        }
    } else {
        var_f0_3 = temp_f1_3 - 2.0f;
block_35:
        sp7C = var_f0_3;
    }
    M2C_FIELD(arg1, f32 *, 4) = sp7C;
    return arg1;
}
