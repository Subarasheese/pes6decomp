/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00228A80(void);
extern u8 func_0022F8D0(void);
extern s32 func_002260F0(s32);
void *func_00223E00(u16);                           /* extern */
s32 func_00225B20(s32);                             /* extern */
u16 func_009566B0(u16);                             /* extern */
s32 func_0096F7D0(u16);                             /* extern */
M2C_UNK func_00AF6B00(s32, u16);                    /* extern */
M2C_UNK func_00AFD9F0(u16, s32, s32, M2C_UNK, u8);  /* extern */
s8 func_00B03CE0(s32);                              /* extern */

void func_00AFC290(void) {
    s32 var_a1;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s8 temp_v0_4;
    u16 temp_v0;
    u16 var_s1;
    u8 temp_a4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v1;

    if (func_00231240() != 1) {
        var_s2 = 0;
loop_2:
        var_s0 = func_002260F0(var_s2);
        if (var_s0 != 0) {
            var_s3 = 0;
            do {
                var_s1 = M2C_FIELD(var_s0, u16 *, 0x1E4);
                if (var_s1 != 0) {
                    if (func_0096F7D0(var_s1) == 1) {
                        temp_v0 = func_009566B0(var_s1);
                        var_s1 = temp_v0 & 0xFFFF;
                        M2C_FIELD(var_s0, u16 *, 0x1E4) = temp_v0;
                        temp_v0_2 = func_00223E00(var_s1);
                        if (temp_v0_2 != NULL) {
                            temp_a4 = M2C_FIELD(temp_v0_2, u8 *, 6);
                            M2C_FIELD(temp_v0_2, u8 *, 6) = (u8) ((temp_a4 & ~0x3F) | 7);
                            func_00AFD9F0(var_s1, var_s2, var_s3 & 0xFF, 7, temp_a4);
                            goto block_8;
                        }
                    } else {
block_8:
                        if (((func_0022F8D0() & 0xFF) != 2) && (func_00225B20(var_s2) == 1)) {
                            func_00AF6B00(var_s3 & 0xFF, var_s1);
                        }
                    }
                }
                var_s3 += 1;
                var_s0 += 0x16;
            } while (var_s3 < 0x20);
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 >= 0x48) {
                temp_v0_3 = func_00228A80();
                if (temp_v0_3 != NULL) {
                    var_s1_2 = 0;
                    do {
                        temp_v0_4 = func_00B03CE0(var_s1_2);
                        temp_v1 = temp_v0_3 + (var_s1_2 & 0xFF) + 0x30000;
                        var_s1_2 = (var_s1_2 + 1) & 0xFF;
                        M2C_FIELD(temp_v1, s8 *, 0x3EB1) = temp_v0_4;
                    } while (var_s1_2 < 0x48);
                    temp_v0_5 = func_00228A80();
                    if (temp_v0_5 != NULL) {
                        var_a1 = 0;
                        do {
                            temp_a0 = temp_v0_5 + (var_a1 & 0xFFFF);
                            temp_a0_2 = temp_a0 + 0x33EF9;
                            M2C_FIELD(temp_a0, s8 *, 0x33EF9) = 0;
                            var_a1 = (var_a1 + 8) & 0xFFFF;
                            M2C_FIELD(temp_a0_2, s8 *, 1) = 0;
                            M2C_FIELD(temp_a0_2, s8 *, 2) = 0;
                            M2C_FIELD(temp_a0_2, s8 *, 3) = 0;
                            M2C_FIELD(temp_a0_2, s8 *, 4) = 0;
                            M2C_FIELD(temp_a0_2, s8 *, 5) = 0;
                            M2C_FIELD(temp_a0_2, s8 *, 6) = 0;
                            M2C_FIELD(temp_a0_2, s8 *, 7) = 0;
                        } while (var_a1 < 0x48);
                    }
                }
            } else {
                goto loop_2;
            }
        }
    }
}
