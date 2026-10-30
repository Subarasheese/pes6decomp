/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017DB10(s32, M2C_UNK, f32, f32);      /* extern */
M2C_UNK func_0017DCE0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_00CBD7C0[];

void func_00BF8D60(s32 arg0, s32 arg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 < 0x64) {
        temp_v0 = (temp_a0 % 10) & 0xFF;
        if (temp_v0 == 0) {
            sp2C = 4.0f;
            sp28 = 1.0f;
        } else {
            if (temp_v0 >= 7) {
                sp28 = 1.0f;
                var_f0 = (f32) (temp_v0 - 6);
            } else {
                sp28 = 0.0f;
                var_f0 = (f32) (temp_v0 - 1);
            }
            sp2C = var_f0;
        }
        if (temp_a0 < 0xA) {
            sp24 = 0.0f;
            sp20 = 1.0f;
        } else {
            temp_v0_2 = (((arg0 & 0xFF) / 10) + ((u32) temp_a0 >> 0x1F)) & 0xFF;
            if (temp_v0_2 == 0) {
                sp24 = 4.0f;
                sp20 = 1.0f;
            } else {
                if (temp_v0_2 >= 7) {
                    sp20 = 1.0f;
                    var_f0_2 = (f32) (temp_v0_2 - 6);
                } else {
                    sp20 = 0.0f;
                    var_f0_2 = (f32) (temp_v0_2 - 1);
                }
                sp24 = var_f0_2;
            }
        }
    } else {
        sp24 = 0.0f;
        sp2C = 0.0f;
        sp20 = 1.0f;
        sp28 = 1.0f;
    }
    func_0017DCE0((*(s32 *)D_00CBD7C0), 0x8CB8, 1);
    func_0017DB10((*(s32 *)D_00CBD7C0), 0x8CB8, 0.1328125f * sp2C, 0.40625f * sp28);
    func_0017DCE0((*(s32 *)D_00CBD7C0), 0x8CB9, 1);
    func_0017DB10((*(s32 *)D_00CBD7C0), 0x8CB9, 0.1328125f * sp24, 0.40625f * sp20);
    temp_a0_2 = arg1 & 0xFF;
    if (temp_a0_2 >= 0x64) {
        sp24 = 0.0f;
        sp2C = 0.0f;
        sp20 = 1.0f;
        sp28 = 1.0f;
    } else {
        temp_v0_3 = (temp_a0_2 % 10) & 0xFF;
        if (temp_v0_3 == 0) {
            sp2C = 4.0f;
            sp28 = 1.0f;
        } else {
            if (temp_v0_3 >= 7) {
                sp28 = 1.0f;
                var_f0_3 = (f32) (temp_v0_3 - 6);
            } else {
                sp28 = 0.0f;
                var_f0_3 = (f32) (temp_v0_3 - 1);
            }
            sp2C = var_f0_3;
        }
        if (temp_a0_2 < 0xA) {
            sp24 = 0.0f;
            sp20 = 1.0f;
        } else {
            temp_v0_4 = (((arg1 & 0xFF) / 10) + ((u32) temp_a0_2 >> 0x1F)) & 0xFF;
            if (temp_v0_4 == 0) {
                sp24 = 4.0f;
                sp20 = 1.0f;
            } else {
                if (temp_v0_4 >= 7) {
                    sp20 = 1.0f;
                    var_f0_4 = (f32) (temp_v0_4 - 6);
                } else {
                    sp20 = 0.0f;
                    var_f0_4 = (f32) (temp_v0_4 - 1);
                }
                sp24 = var_f0_4;
            }
        }
    }
    func_0017DCE0((*(s32 *)D_00CBD7C0), 0x8CBA, 1);
    func_0017DB10((*(s32 *)D_00CBD7C0), 0x8CBA, 0.1328125f * sp2C, 0.40625f * sp28);
    func_0017DCE0((*(s32 *)D_00CBD7C0), 0x8CBB, 1);
    func_0017DB10((*(s32 *)D_00CBD7C0), 0x8CBB, 0.1328125f * sp24, 0.40625f * sp20);
}
