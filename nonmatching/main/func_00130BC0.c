/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00130D80(void *, void *, u8, f32);     /* extern */
M2C_UNK func_00130EE0(void *, void *, u8, f32);     /* extern */
M2C_UNK func_00130FF0(void *, void *, u8, f32);     /* extern */
M2C_UNK func_00131270(void *, void *, u8, f32);     /* extern */
M2C_UNK func_001312D0(void *, void *, u8, f32);     /* extern */
M2C_UNK func_00131440(void *, void *, u8, f32);     /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
void func_00130BC0(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    M2C_UNK (*var_fp)(void *, void *, u8, f32);
    M2C_UNK (*var_s6)(void *, void *, u8, f32);
    M2C_UNK (*var_s7)(void *, void *, u8, f32);
    s32 *var_s1;
    s32 *var_s2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a1;
    void *temp_s3;
    void *var_s0;
    void *var_s4;

    temp_v1 = M2C_FIELD(arg1, s32 *, 4);
    temp_a3 = temp_v1 & 8;
    if (temp_a3 != 0) {
        M2C_FIELD(arg0, s8 *, 0x1D) = (s8) (M2C_FIELD(arg0, s8 *, 0x1D) | ~0x7F);
    }
    if (temp_v1 & 2) {
        if (temp_a3 != 0) {
            var_s6 = NULL;
        } else {
            var_s6 = func_001312D0;
        }
        var_s7 = func_00130FF0;
        var_fp = func_00130D80;
    } else {
        if (temp_a3 != 0) {
            var_s6 = NULL;
        } else {
            var_s6 = func_00131440;
        }
        var_s7 = func_00131270;
        var_fp = func_00130EE0;
    }
    var_s4 = M2C_FIELD(arg0, void **, 0);
    var_s0 = arg1 + M2C_FIELD(arg2, s32 *, 4);
    var_s2 = arg1 + M2C_FIELD(arg1, s32 *, 0x14);
    var_s1 = arg1 + M2C_FIELD(arg1, s32 *, 0x18);
    if (var_s4 != NULL) {
        do {
            temp_v0 = *var_s1;
            temp_a1 = arg1 + *var_s2 + 4;
            if (temp_v0 != 0) {
                temp_s3 = arg1 + temp_v0 + 4;
                var_s6(var_s4, temp_a1, M2C_FIELD(var_s0, u8 *, 0), fparg0);
                if (M2C_FIELD(var_s4, s8 *, 0x103) & 0x80) {
                    var_fp(var_s4, temp_s3, M2C_FIELD(var_s0, u8 *, 1), fparg0);
                } else {
                    var_s7(var_s4, temp_s3, M2C_FIELD(var_s0, u8 *, 1), fparg0);
                }
            } else {
                var_s6(var_s4, temp_a1, M2C_FIELD(var_s0, u8 *, 0), fparg0);
                M2C_FIELD(var_s4, s32 *, 0xC8) = 0;
            }
            var_s4 = M2C_FIELD(var_s4, void **, 0x104);
            var_s2 += 4;
            var_s1 += 4;
            var_s0 += 2;
        } while (var_s4 != NULL);
    }
}
