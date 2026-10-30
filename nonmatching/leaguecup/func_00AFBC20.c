/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern u32 func_00B035D0(void);
M2C_UNK func_0020E310(M2C_UNK, s8 *);               /* extern */
s32 func_0095C390(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00971AF0(s32, f32 *, void *);          /* extern */
M2C_UNK func_00971DD0(s32, u8);                     /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_009737A0(s32, s8 *);                   /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, s32, s32);               /* extern */
M2C_UNK func_00973C70(s32, s32);                    /* extern */
s32 func_00B000F0(u8);                              /* extern */

void func_00AFBC20(void) {
    f32 sp50;
    f32 sp54;
    s8 sp6C;
    s8 sp6D;
    s8 sp6E;
    s8 sp6F;
    s32 *var_s3_2;
    s32 temp_s1_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    u16 temp_s0;
    u32 temp_v0;
    u8 temp_s1;
    void *temp_a2;
    void *temp_s0_2;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x29EA4), temp_v0 + (M2C_FIELD(temp_v0, u8 *, 0x5C7) * 0x10) + 0x29DF4);
        temp_a2 = (M2C_FIELD(temp_v0, u8 *, 0x5C7) * 0x10) + temp_v0;
        sp50 = M2C_FIELD(temp_a2, f32 *, 0x29DF4) + M2C_FIELD(temp_v0, f32 *, 0x29F88);
        sp54 = M2C_FIELD(temp_a2, f32 *, 0x29DF8) + M2C_FIELD(temp_v0, f32 *, 0x29F8C);
        func_00971AF0(M2C_FIELD(temp_v0, s32 *, 0x29EA8), &sp50, temp_a2);
        temp_v0_2 = ((M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) * 0x1C) + temp_v0;
        temp_s0 = M2C_FIELD(temp_v0_2, u16 *, 0xA0C);
        temp_s1 = M2C_FIELD(temp_v0_2, u8 *, 0xA18);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29EAC), 0x23, func_0095C390(temp_s0));
        func_00971DD0(M2C_FIELD(temp_v0, s32 *, 0x29EA8), M2C_FIELD(temp_v0, u8 *, 0x29F7C));
        func_00973480(M2C_FIELD(temp_v0, s32 *, 0x29F80), (u64) ((s64) M2C_FIELD(func_00970870(temp_s0), u8 *, 1) << 0x38) >> 0x3C);
        temp_v0_3 = func_00B000F0(M2C_FIELD(temp_v0, u8 *, 0x29F7C));
        if (temp_v0_3 != -1) {
            if (temp_v0_3 != (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0))) {
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F10), 1);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F14), 1);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F1C), 1);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F18), 1);
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F10), 0x25, func_0095C390(M2C_FIELD(((temp_v0_3 * 0x1C) + temp_v0), u16 *, 0xA0C)));
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F14), 0x28, (temp_s1 & 0xFF) + 1);
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F18), 0x26, M2C_FIELD(temp_v0, u8 *, 0x29F7C) + 1);
            } else {
                goto block_5;
            }
        } else {
block_5:
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F10), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F14), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F1C), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x29F18), 0);
        }
        var_s3 = 0;
        do {
            temp_s1_2 = var_s3 & 0xFF;
            temp_s0_2 = temp_v0 + (temp_s1_2 * 4);
            func_001D7D80(M2C_FIELD(temp_s0_2, void **, 0x124), 0xC);
            func_009737E0(M2C_FIELD(temp_s0_2, s32 *, 0x29EB0), 0xA, M2C_FIELD((temp_v0 + (temp_s1_2 * 0x1C)), u16 *, 0xA18) + 1);
            func_001D7D60(M2C_FIELD(temp_s0_2, void **, 0x1EC), 0);
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0x17);
        var_s0 = 0;
        do {
            if ((func_00226710() & 0xFF) != 0x2C) {
                if ((func_00226710() & 0xFF) == 0x38) {
                    goto block_13;
                }
                var_s1 = var_s0 & 0xFF;
                if (var_s1 >= 0x12) {
                    temp_v0_4 = temp_v0 + (var_s1 * 4);
                    var_s3_2 = temp_v0_4 + 0x29F20;
                    func_009737C0(M2C_FIELD(temp_v0_4, s32 *, 0x29F20), 0);
                } else {
                    temp_v0_5 = temp_v0 + (var_s1 * 4);
                    var_s3_2 = temp_v0_5 + 0x29F20;
                    func_009737E0(M2C_FIELD(temp_v0_5, s32 *, 0x29F20), var_s1 + 0xC, M2C_FIELD((temp_v0 + (var_s1 * 0x1C)), u16 *, 0xA18) + 1);
                    func_009737C0(M2C_FIELD(temp_v0_5, s32 *, 0x29F20), 1);
                }
            } else {
block_13:
                var_s1 = var_s0 & 0xFF;
                temp_v1 = temp_v0 + (var_s1 * 4);
                var_s3_2 = temp_v1 + 0x29F20;
                func_009737E0(M2C_FIELD(temp_v1, s32 *, 0x29F20), var_s1 + 0xC, M2C_FIELD((temp_v0 + (var_s1 * 0x1C)), u16 *, 0xA18) + 1);
                func_009737C0(M2C_FIELD(temp_v1, s32 *, 0x29F20), 1);
            }
            if (var_s1 == (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0))) {
                sp6C = 0x2A;
                sp6D = 0x51;
                sp6E = 0x86;
                sp6F = 0xFF;
                func_009737A0(*var_s3_2, &sp6C);
            } else {
                func_0020E310(2, &sp6C);
                func_009737A0(*var_s3_2, &sp6C);
            }
            var_s0 = (var_s0 + 1) & 0xFF;
        } while (var_s0 < 0x17);
    }
}
