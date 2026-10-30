/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00236E90(s32, s32);
extern void * func_00229460(void);
extern u8 func_00229A70(void);
extern u8 func_00225820(void);
extern s32 func_00238330(s32);
s16 func_00225680(s8);                              /* extern */
s8 func_00225940(s8);                               /* extern */
s8 func_00229010(s32);                              /* extern */
s32 func_00234870(s32, s32, M2C_UNK, s32);          /* extern */
s32 func_00983E20(u8);                              /* extern */
M2C_UNK func_00983E70(u8);                          /* extern */
M2C_UNK func_009BAEA0(s32);                         /* extern */
extern void *D_003E7B0C;
extern void *D_003EA9C0;

void func_009BC230(void) {
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s5;
    s32 var_s7;
    u8 temp_s0;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s2;
    void *temp_s4_2;
    void *temp_s6;
    void *temp_v0;

    temp_s2 = D_003EA9C0;
    if (temp_s2 != NULL) {
        temp_s1 = func_00229460();
        temp_s0 = M2C_FIELD(D_003E7B0C, u8 *, 0x28);
        temp_s0_2 = temp_s0 & 0xFF;
        temp_v0 = (temp_s0_2 * 0xC) + temp_s1;
        M2C_FIELD(temp_s2, s8 *, 0xE1) = (s8) (M2C_FIELD(temp_v0, u8 *, 0x4ABB) * (func_00983E20(M2C_FIELD(D_003E7B0C, u8 *, 0x29)) & 0xFF));
        var_s7 = func_00229A70() & 0xFF;
        if ((func_00238330(func_00225820() & 0xFF) & 0xFF) == 4) {
            var_s7 = 4 & 0xFF;
        }
        M2C_FIELD(temp_s2, u8 *, 0xF0) = (u8) M2C_FIELD(((temp_s0_2 * 0xC) + temp_s1), u8 *, 0x4ABA);
        func_00983E70(M2C_FIELD(D_003E7B0C, u8 *, 0x29));
        var_s5 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x4ABB) > 0) {
            do {
                temp_s4 = func_00234870((M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF, var_s5, 0, var_s7) & 0xFF;
                temp_s3 = func_00234870((M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF, var_s5, 1, var_s7) & 0xFF;
                temp_s1_2 = var_s5 & 0xFF;
                temp_s0_3 = temp_s2 + (temp_s1_2 * 2);
                M2C_FIELD(temp_s0_3, s8 *, 0x68) = func_00229010(temp_s4);
                M2C_FIELD(temp_s0_3, s8 *, 0x69) = func_00229010(temp_s3);
                temp_s6 = temp_s2 + (temp_s1_2 * 4);
                M2C_FIELD(temp_s6, s16 *, 0x7C) = func_00225680(func_00229010(temp_s4));
                M2C_FIELD(temp_s6, s16 *, 0x7E) = func_00225680(func_00229010(temp_s3));
                M2C_FIELD(temp_s0_3, s8 *, 0xA4) = func_00225940(func_00229010(temp_s4));
                M2C_FIELD(temp_s0_3, s8 *, 0xA5) = func_00225940(func_00229010(temp_s3));
                temp_s4_2 = temp_s2 + (temp_s1_2 * 6);
                M2C_FIELD(temp_s4_2, u8 *, 4) = func_00236E90(temp_s4, (M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF);
                M2C_FIELD(temp_s0_3, u8 *, 0x54) = (u8) M2C_FIELD(temp_s4_2, u8 *, 4);
                M2C_FIELD(temp_s4_2, u8 *, 7) = func_00236E90(temp_s3, (M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF);
                M2C_FIELD(temp_s0_3, u8 *, 0x55) = (u8) M2C_FIELD(temp_s4_2, u8 *, 7);
                M2C_FIELD(temp_s4_2, s8 *, 5) = 0;
                M2C_FIELD(temp_s4_2, s8 *, 6) = 0;
                M2C_FIELD(temp_s0_3, s8 *, 0x40) = 0;
                M2C_FIELD(temp_s4_2, s8 *, 8) = 0;
                M2C_FIELD(temp_s4_2, s8 *, 9) = 0;
                M2C_FIELD(temp_s0_3, s8 *, 0x41) = 0;
                func_009BAEA0(var_s5);
                var_s5 = (var_s5 + 1) & 0xFF;
            } while (var_s5 < (s32) M2C_FIELD(temp_v0, u8 *, 0x4ABB));
        }
    }
}
