/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F82B0(s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC8A60(u16, u8, M2C_UNK, u8);        /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, s32);                /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */
extern u8 D_003E9E88;
extern char D_00CBFEE0[];

void func_00C17D90(void *arg0) {
    s32 *temp_s1;
    s32 *var_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    u8 var_v1;
    void *temp_v0_2;

    var_s1 = 0;
    if (func_00BC9F00() != 0) {
        var_s2 = 0;
        var_a0 = ((void *)D_00CBFEE0);
loop_2:
        if (M2C_FIELD(arg0, s32 *, 0x2C8) != *var_a0) {
            var_s2 += 1;
            var_a0 += 4;
            if (var_s2 < 4) {
                goto loop_2;
            }
        }
        if (func_00BCF3A0(0x200000) == 0) {
            if (func_00BCF3A0(0x400000) != 0) {
                var_s2 = (s32) (var_s2 + 1) % 4;
                goto block_13;
            }
        } else {
            temp_v1 = var_s2 + 3;
            var_s2 = temp_v1 & 3;
            if (temp_v1 < 0) {
                if (var_s2 != 0) {
                    var_s2 -= 4;
                    goto block_10;
                }
block_13:
                var_s1 = 1;
            } else {
block_10:
                var_s1 = 1;
            }
        }
        if (var_s1 != 0) {
            temp_v0 = func_00C1B400(0);
            temp_s1 = &(((void *)D_00CBFEE0))[var_s2];
            temp_v0_2 = temp_v0 + 0x34;
            if (((s32) *temp_s1 % 2) != 1) {
                M2C_FIELD(temp_v0_2, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 1) & ~0xF0) | ((0 & 0xF) * 0x10));
                var_v1 = (M2C_FIELD(temp_v0_2, u8 *, 0x2C) & ~0xC0) | 0x80;
            } else {
                M2C_FIELD(temp_v0_2, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 1) & ~0xF0) | 0xC0);
                var_v1 = (M2C_FIELD(temp_v0_2, u8 *, 0x2C) & ~0xC0) | ((1 & 3) << 6);
            }
            M2C_FIELD(temp_v0_2, u8 *, 0x2C) = var_v1;
            temp_v1_2 = *temp_s1;
            var_v0 = temp_v1_2 >> 1;
            if (temp_v1_2 < 0) {
                var_v0 = (s32) (temp_v1_2 + 1) >> 1;
            }
            if (var_v0 != 0) {
                D_003E9E88 = 0x3F;
            } else {
                D_003E9E88 = 0;
            }
            func_00BC8A60(M2C_FIELD(arg0, u16 *, 0x2E0), D_003E9E88, 0, M2C_FIELD(temp_v0_2, u8 *, 1));
            func_00BC91D0(0, temp_v0);
            temp_a1 = *temp_s1;
            M2C_FIELD(arg0, s32 *, 0x2C8) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0) = func_002F82B0((s32) M2C_FIELD(arg0, u16 *, 0x2E0), temp_a1);
            func_0026E840(0x8400F803);
        }
    }
}
