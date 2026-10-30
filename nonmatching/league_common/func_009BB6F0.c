/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00236E90(s32, s32);
extern void * func_00229460(void);
s16 func_00225680(s8);                              /* extern */
s8 func_00225940(s8);                               /* extern */
s8 func_00234870(s32, s32, M2C_UNK, u8);            /* extern */
M2C_UNK func_00983E70(u8, void *);                  /* extern */
M2C_UNK func_009BAEA0(s32);                         /* extern */
extern void *D_003E7B0C;
extern void *D_003EA9C0;

void func_009BB6F0(void) {
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s5;
    s8 temp_s3_2;
    s8 temp_s4;
    s8 temp_v0_2;
    u8 temp_s7;
    void *temp_a1;
    void *temp_s0;
    void *temp_s2;
    void *temp_s4_2;
    void *temp_s6;
    void *temp_v0;

    temp_s2 = D_003EA9C0;
    if (temp_s2 != NULL) {
        temp_v0 = func_00229460();
        temp_s7 = M2C_FIELD(D_003E7B0C, u8 *, 0x28);
        temp_s3 = temp_s7 * 0xC;
        temp_a1 = temp_s3 + temp_v0;
        M2C_FIELD(temp_s2, s8 *, 0xE1) = (s8) (M2C_FIELD(temp_a1, u8 *, 0x4ABB) * M2C_FIELD((temp_s7 + temp_v0), u8 *, 0x4616));
        M2C_FIELD(temp_s2, u8 *, 0xF0) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4ABA);
        func_00983E70(temp_s7, temp_a1);
        var_s5 = 0;
        if ((s32) M2C_FIELD(temp_a1, u8 *, 0x4ABB) > 0) {
            do {
                temp_s4 = func_00234870((M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF, var_s5, 0, temp_s7) & 0xFF;
                temp_v0_2 = func_00234870((M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF, var_s5, 1, temp_s7);
                temp_s1 = var_s5 & 0xFF;
                temp_s3_2 = temp_v0_2 & 0xFF;
                temp_s0 = temp_s2 + (temp_s1 * 2);
                temp_s6 = temp_s2 + (temp_s1 * 4);
                M2C_FIELD(temp_s0, s8 *, 0x68) = temp_s4;
                M2C_FIELD(temp_s0, s8 *, 0x69) = temp_v0_2;
                M2C_FIELD(temp_s6, s16 *, 0x7C) = func_00225680(temp_s4);
                M2C_FIELD(temp_s6, s16 *, 0x7E) = func_00225680(temp_s3_2);
                M2C_FIELD(temp_s0, s8 *, 0xA4) = func_00225940(temp_s4);
                M2C_FIELD(temp_s0, s8 *, 0xA5) = func_00225940(temp_s3_2);
                temp_s4_2 = temp_s2 + (temp_s1 * 6);
                M2C_FIELD(temp_s4_2, u8 *, 4) = func_00236E90((s32) temp_s4, (M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF);
                M2C_FIELD(temp_s0, u8 *, 0x54) = (u8) M2C_FIELD(temp_s4_2, u8 *, 4);
                M2C_FIELD(temp_s4_2, u8 *, 7) = func_00236E90((s32) temp_s3_2, (M2C_FIELD(temp_s2, u8 *, 0xE0) - 1) & 0xFF);
                M2C_FIELD(temp_s0, u8 *, 0x55) = (u8) M2C_FIELD(temp_s4_2, u8 *, 7);
                M2C_FIELD(temp_s4_2, s8 *, 5) = 0;
                M2C_FIELD(temp_s4_2, s8 *, 6) = 0;
                M2C_FIELD(temp_s0, s8 *, 0x40) = 0;
                M2C_FIELD(temp_s4_2, s8 *, 8) = 0;
                M2C_FIELD(temp_s4_2, s8 *, 9) = 0;
                M2C_FIELD(temp_s0, s8 *, 0x41) = 0;
                func_009BAEA0(var_s5);
                var_s5 = (var_s5 + 1) & 0xFF;
            } while (var_s5 < (s32) M2C_FIELD((temp_v0 + temp_s3), u8 *, 0x4ABB));
        }
    }
}
