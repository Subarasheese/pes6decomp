/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern s32 func_00226710(void);
extern void func_0098D1E0(void);
s32 func_00228F20(s8);                              /* extern */
s8 func_00229010(s8);                               /* extern */
s16 func_002290D0(s8);                              /* extern */
s32 func_00233EF0(s8, u8);                          /* extern */
s32 func_00234870(u8, s8, M2C_UNK, u8);             /* extern */
s32 func_00236BA0(u8, u8);                          /* extern */
M2C_UNK func_0094C620(s32, s32);                    /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern char D_00591BB0[];
extern char D_00591BB2[];

s32 func_0098E0B0(void) {
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s7;
    s32 var_v0;
    s8 temp_s0;
    s8 temp_s1;
    s8 var_s4;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_s1_2;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1_4;

    temp_s3 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
    temp_s6 = temp_s3 * 0xC;
    temp_s2 = M2C_FIELD((temp_s6 + D_003E77B4), u8 *, 0x4AB6);
    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        var_s4 = 0;
        var_s7 = 0;
        if ((s32) M2C_FIELD((temp_s6 + D_003E77B4), u8 *, 0x4ABB) > 0) {
loop_5:
            temp_s0 = func_00234870(temp_s2, var_s4, 0, temp_s3) & 0xFF;
            temp_v1 = temp_s0 & 0xFF;
            temp_s1 = func_00234870(temp_s2, var_s4, 1, temp_s3) & 0xFF;
            if (temp_v1 < 0x71) {
                temp_v0_2 = temp_s1 & 0xFF;
                if ((temp_v0_2 < 0x71) && (temp_v1 != temp_v0_2)) {
                    temp_s5 = func_00229010(temp_s0) & 0xFF;
                    temp_v1_2 = func_00229010(temp_s1) & 0xFF;
                    if (((temp_s5 & 0xFF) < 0x50) && ((temp_v1_2 & 0xFF) < 0x50) && (((func_00228F20(temp_s0) & 0xFF) > 0) || ((func_00228F20(temp_s1) & 0xFF) > 0))) {
                        var_s7 = 1;
                        if ((func_00233EF0(temp_s0, temp_s2) == 0) && (func_00233EF0(temp_s1, temp_s2) == 0)) {
                            M2C_FIELD(D_003E77B4, s8 *, 0x16F2) = temp_s0;
                            M2C_FIELD(D_003E77B4, s8 *, 0x16F3) = temp_s1;
                            (*(s16 *)D_00591BB0) = func_002290D0(temp_s0);
                            (*(s16 *)D_00591BB2) = func_002290D0(temp_s1);
                            M2C_FIELD(D_003E77B0, s8 *, 0) = func_00229010(temp_s0);
                            M2C_FIELD(D_003E77B0, s8 *, 0) = func_00229010(temp_s1);
                            temp_s0_2 = func_00228F20(temp_s0);
                            func_0094C620(temp_s0_2, func_00228F20(temp_s1));
                            M2C_FIELD((temp_s6 + D_003E77B4), s8 *, 0x4AB7) = var_s4;
                            M2C_FIELD(temp_v0, s8 *, 0x29) = var_s4;
                            return 1;
                        }
                    }
                }
            }
            var_s4 = (var_s4 + 1) & 0xFF;
            if (var_s4 >= (s32) M2C_FIELD((temp_s6 + D_003E77B4), u8 *, 0x4ABB)) {
                goto block_17;
            }
            goto loop_5;
        }
block_17:
        temp_v1_3 = M2C_FIELD(D_003E77B0, s32 *, 0x20);
        if (!(((u64) ((s64) temp_v1_3 << 0x20) >> 0x20) & 0x400)) {
            if (var_s7 & 0xFF) {
                temp_s1_2 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
                temp_s0_3 = temp_s1_2 * 0xC;
                temp_v0_3 = temp_s0_3 + D_003E77B4;
                temp_a1 = M2C_FIELD(temp_v0_3, u8 *, 0x4AB6);
                if (((s32) temp_a1 < (s32) M2C_FIELD(temp_v0_3, u8 *, 0x4ABA)) && (func_00236BA0(temp_s1_2, temp_a1) == 1)) {
                    if ((func_00226710() & 0xFF) != 6) {
                        var_v0 = func_00236BA0(temp_s1_2, M2C_FIELD((temp_s0_3 + D_003E77B4), u8 *, 0x4AB6)) & 0xFF;
                    } else {
                        var_v0 = 1;
                    }
                    temp_v1_4 = temp_s0_3 + D_003E77B4;
                    temp_a0 = M2C_FIELD(temp_v1_4, u8 *, 0x4AB6);
                    if (((s32) temp_a0 < (s32) M2C_FIELD(temp_v1_4, u8 *, 0x4ABA)) && ((var_v0 & 0xFF & 0xFF) == 1)) {
                        M2C_FIELD(temp_v1_4, u8 *, 0x4AB6) = (u8) (temp_a0 + 1);
                    }
                    func_0098D1E0();
                }
                goto block_33;
            }
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (temp_v1_3 | 0x400);
            return 1;
        }
        goto block_33;
    }
block_33:
    return 0;
}
