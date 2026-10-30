/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022F0E0(void);
extern s32 func_00226710(void);
extern void func_0098D1E0(void);
extern void func_0094A7F0(s32, s32);
extern void * func_00229460(void);
extern s32 func_00230380(void);
s32 func_00210DF0();                                /* extern */
s32 func_00228F20(u8);                              /* extern */
s32 func_00229010(u8);                              /* extern */
s32 func_00230410();                                /* extern */
s32 func_00233EF0(u8, u8);                          /* extern */
M2C_UNK func_002343F0(u8, u8, M2C_UNK);             /* extern */
M2C_UNK func_00234C10(u8, u8, s32, u8);             /* extern */
s8 func_00234E00(u8);                               /* extern */
s32 func_00236680(u8);                              /* extern */
s32 func_00236BA0(u8, u8);                          /* extern */
M2C_UNK func_0094A0E0();                            /* extern */
M2C_UNK func_0094B020(u8);                          /* extern */
M2C_UNK func_0094CAE0(s32);                         /* extern */
M2C_UNK func_0094D190(s32);                         /* extern */
M2C_UNK func_0094D590(s32);                         /* extern */
M2C_UNK func_0096E8C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009786A0(s32);                         /* extern */
M2C_UNK func_0098D6B0(u8, u8);                      /* extern */
M2C_UNK func_00994840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF6250(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B00D40(u8, M2C_UNK);                 /* extern */
M2C_UNK func_00B01B10(s32, s32);                    /* extern */
M2C_UNK func_00B220F0(u8, u8, u8);                  /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern void *D_003E7B0C;
extern char D_00591C09[];

void func_0098BF20(void) {
    s32 temp_a0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1_2;
    s32 temp_s4_3;
    s32 temp_s6;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s8 var_s2;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_s1;
    u8 temp_s1_3;
    u8 temp_s1_4;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_s4;
    u8 temp_s4_2;
    u8 temp_s5;
    void *temp_s0;
    void *temp_s5_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s5 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
    temp_s0 = func_00229460();
    temp_s6 = func_0022F0E0();
    if ((temp_s0 != NULL) && (temp_s6 != 0)) {
        temp_s1 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        temp_a0 = func_00236680(temp_s1) & 0xFF;
        temp_s1_2 = (temp_s1 & 0xFF) * 0xC;
        var_s3 = 0;
        if ((s32) M2C_FIELD((temp_s1_2 + D_003E77B4), u8 *, 0x4AC1) > 0) {
            var_s2 = temp_a0 & 0xFF;
            do {
                temp_s4 = M2C_FIELD(D_003E77B0, u8 *, 0x2C);
                if (temp_s4 == (func_00229010(var_s2 & 0xFF) & 0xFF)) {
                    M2C_FIELD(D_003E77B4, s8 *, 0x16F2) = var_s2;
                } else {
                    temp_s4_2 = M2C_FIELD(D_003E77B0, u8 *, 0x2D);
                    if (temp_s4_2 == (func_00229010(var_s2 & 0xFF) & 0xFF)) {
                        M2C_FIELD(D_003E77B4, s8 *, 0x16F3) = var_s2;
                    }
                }
                var_s3 += 1;
                var_s2 += 1;
            } while (var_s3 < (s32) M2C_FIELD((temp_s1_2 + D_003E77B4), u8 *, 0x4AC1));
        }
        temp_s1_3 = M2C_FIELD(temp_s0, u8 *, 0x16F2);
        temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x16F3);
        temp_s3 = M2C_FIELD((((temp_s5 & 0xFF) * 0xC) + temp_s0), u8 *, 0x4AB7);
        M2C_FIELD(D_003E7B0C, s8 *, 0x28) = func_00234E00(temp_s1_3);
        func_0094A0E0();
        if ((func_00233EF0(temp_s1_3, temp_s3) == 0) && (func_00233EF0(temp_s2, temp_s3) == 0)) {
            var_s4 = 0;
            do {
                temp_s5_2 = temp_s6 + var_s4;
                func_00234C10(temp_s1_3, temp_s3, var_s4 & 0xFF, M2C_FIELD(temp_s5_2, u8 *, 4));
                func_00234C10(temp_s2, temp_s3, var_s4 & 0xFF, M2C_FIELD(temp_s5_2, u8 *, 8));
                var_s4 += 1;
            } while (var_s4 < 2);
            func_002343F0(temp_s1_3, temp_s3, 1);
            func_002343F0(temp_s2, temp_s3, 1);
        }
        if ((M2C_FIELD(temp_s0, u8 *, 0x16F2) != 0xFF) && (M2C_FIELD(temp_s0, u8 *, 0x16F3) != 0xFF)) {
            temp_s0_2 = func_00229010(temp_s1_3) & 0xFF;
            temp_s4_3 = func_00229010(temp_s2) & 0xFF;
            func_0098D6B0(temp_s1_3, temp_s2);
            func_0094CAE0(temp_s0_2);
            func_0094CAE0(temp_s4_3);
            func_0094D590(temp_s0_2);
            func_0094D590(temp_s4_3);
            if (((u32) ((*(u8 *)D_00591C09) - 1) < 2U) && (func_00230380() == 0)) {
                func_0094D190(temp_s0_2);
                func_0094D190(temp_s4_3);
            }
            func_009786A0(temp_s0_2);
            func_009786A0(temp_s4_3);
            func_0094A7F0(func_00226710() & 0xFF, (s32) temp_s1_3);
            func_0094A7F0(func_00226710() & 0xFF, (s32) temp_s2);
            func_0094B020(temp_s1_3);
            func_0094B020(temp_s2);
            if (func_00210DF0() != 2) {
                func_0096E8C0(temp_s0_2, 0);
                func_0096E8C0(temp_s4_3, 1);
            } else {
                func_00AF6250(temp_s0_2, 0);
                func_00AF6250(temp_s4_3, 1);
                func_00B01B10(temp_s0_2, temp_s4_3);
                func_00B00D40(temp_s1_3, 0);
                func_00B00D40(temp_s2, 1);
            }
        }
        if ((func_00230410() == 1) && ((func_00228F20(temp_s1_3) != 0) || (func_00228F20(temp_s2) != 0))) {
            if (func_00210DF0() == 2) {
                func_00B220F0(temp_s3, temp_s1_3, temp_s2);
            }
            func_00994840(1);
        }
        temp_s1_4 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        temp_s0_3 = temp_s1_4 * 0xC;
        temp_v1 = temp_s0_3 + D_003E77B4;
        temp_a1 = M2C_FIELD(temp_v1, u8 *, 0x4AB6);
        if (((s32) temp_a1 < (s32) M2C_FIELD(temp_v1, u8 *, 0x4ABA)) && (func_00236BA0(temp_s1_4, temp_a1) == 1)) {
            if ((func_00226710() & 0xFF) != 6) {
                var_v0 = func_00236BA0(temp_s1_4, M2C_FIELD((temp_s0_3 + D_003E77B4), u8 *, 0x4AB6)) & 0xFF;
            } else {
                var_v0 = 1;
            }
            temp_v1_2 = temp_s0_3 + D_003E77B4;
            temp_a0_2 = M2C_FIELD(temp_v1_2, u8 *, 0x4AB6);
            if (((s32) temp_a0_2 < (s32) M2C_FIELD(temp_v1_2, u8 *, 0x4ABA)) && ((var_v0 & 0xFF & 0xFF) == 1)) {
                M2C_FIELD(temp_v1_2, u8 *, 0x4AB6) = (u8) (temp_a0_2 + 1);
            }
            func_0098D1E0();
        }
    }
}
