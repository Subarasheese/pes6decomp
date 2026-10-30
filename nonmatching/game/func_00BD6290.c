/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, s32, s32);            /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B3480(void *);                          /* extern */
s32 func_009B34C0(f32, f32, f32, f32);              /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
s32 func_00BD6800(void *, M2C_UNK);                 /* extern */
s32 func_00BD6930(void *, M2C_UNK);                 /* extern */
s32 func_00BD6B20(void *, M2C_UNK);                 /* extern */

s32 func_00BD6290(void *arg0, f32 fparg0, f32 fparg1) {
    M2C_UNK var_a1;
    f32 temp_f22;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_a0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_a1_2;
    u8 temp_v1;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    var_s1 = 0;
    var_s0 = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0));
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    temp_a0 = func_009B3070(M2C_FIELD(temp_v0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x2C)) & 0xFFFF;
    if (temp_a0 < 0) {
        var_f1 = 2.0f * (f32) (((u32) temp_a0 >> 1) | (temp_a0 & 1));
    } else {
        var_f1 = (f32) temp_a0;
    }
    if (var_f1 < 9102.223f) {
        var_a1 = 0;
    } else {
        if (temp_a0 < 0) {
            var_f1_2 = 2.0f * (f32) (((u32) temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1_2 = (f32) temp_a0;
        }
        if (!(var_f1_2 < 20024.889f)) {
            var_a1 = 2;
        } else {
            var_a1 = 1;
        }
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x53);
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_v0 = func_00BD6930(arg0, var_a1);
block_29:
        var_s0 = var_v0 & 0xFFFF;
        break;
    case 1:
        var_v0 = func_00BD6B20(arg0, var_a1);
        goto block_29;
    case 4:
    case 3:
        var_v0 = func_00BD6800(arg0, var_a1);
        goto block_29;
    }
    if (var_s0 != 0) {
        temp_v1_2 = var_s0 & 0xFFFF;
        if ((temp_v1_2 != 0x551) && (temp_v1_2 != 0x543) && (temp_v1_2 != 0x4EB) && (temp_v1_2 != 0x4EA)) {
            var_a1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C);
        } else {
            temp_s1 = M2C_FIELD(arg0, void **, 0);
            temp_f22 = M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s1, u16 *, 0x28), 0x500);
            var_a1_2 = func_009B34C0(temp_f22, M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s1, u16 *, 0x28), 0x500), fparg0, fparg1) & 0xFFFF;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = var_a1_2;
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s8 *, 0x2D) = (s8) ((((M2C_FIELD(temp_v0_2, u16 *, 0x26) - M2C_FIELD(temp_v0_2, u16 *, 0x2C)) + 0x10000) & 0xFFFF) < 0x8001);
        temp_a0_2 = M2C_FIELD(arg0, void **, 0);
        temp_v1_3 = M2C_FIELD(temp_a0_2, s32 *, 0x1C);
        if (temp_v1_3 >= 0x681) {
            func_00209A00(M2C_FIELD(temp_a0_2, void **, 4), var_s0, 0);
        } else {
            var_v0_2 = temp_v1_3 >> 9;
            if (temp_v1_3 < 0) {
                var_v0_2 = (s32) (temp_v1_3 + 0x1FF) >> 9;
            }
            func_00209A00(M2C_FIELD(temp_a0_2, void **, 4), var_s0, var_v0_2 & 0xFFFF);
        }
        var_s1 = 1;
    }
    return var_s1;
}
