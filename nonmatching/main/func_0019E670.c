/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00145380(s32);
M2C_UNK func_0014E810(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_005202E8[];
extern char D_005202EC[];
extern char D_005202F0[];
extern char D_005202F1[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
void func_0019E670(f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_s1;
    u8 temp_s2;

    temp_s3 = (*(s32 *)D_005202E8);
    if (temp_s3 != 0) {
        temp_s2 = (*(u8 *)D_005202F1);
        temp_s1 = (*(u8 *)D_005202F0);
        if ((s32) temp_s2 >= 0) {
            var_f0 = (f32) temp_s2;
        } else {
            var_f0 = 2.0f * (f32) ((temp_s2 >> 1) | (temp_s2 & 1));
        }
        temp_f1 = fparg0 * var_f0;
        if (temp_f1 >= 2.1474836e9f) {
            var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_v1 = (s32) temp_f1;
        }
        temp_s0 = (temp_s1 + (var_v1 & 0xFF & 0xFF)) & 0xFF;
        func_0014E810((*(s32 *)D_005202EC), temp_s3, 0, 5, temp_s0);
        if ((s32) temp_s2 < 0) {
            var_f0_2 = 2.0f * (f32) ((temp_s2 >> 1) | (temp_s2 & 1));
        } else {
            var_f0_2 = (f32) temp_s2;
        }
        temp_f1_2 = fparg1 * var_f0_2;
        if (temp_f1_2 >= 2.1474836e9f) {
            var_v1_2 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
        } else {
            var_v1_2 = (s32) temp_f1_2;
        }
        temp_s1_2 = (temp_s1 + (var_v1_2 & 0xFF & 0xFF)) & 0xFF;
        func_0014E810((*(s32 *)D_005202EC), temp_s3, 5, 5, temp_s1_2);
        temp_v0 = (temp_s0 & 0xFF) + (temp_s1_2 & 0xFF);
        if (temp_v0 >= 0x100) {
            var_a4 = 0xFF;
        } else {
            temp_f1_3 = 0.9f * (f32) temp_v0;
            if (temp_f1_3 >= 2.1474836e9f) {
                var_a4_2 = (s32) (temp_f1_3 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a4_2 = (s32) temp_f1_3;
            }
            var_a4 = var_a4_2 & 0xFF;
        }
        func_0014E810((*(s32 *)D_005202EC), temp_s3, 0xA, 5, var_a4);
        func_00145380(0x2724);
    }
}
