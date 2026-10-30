/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
void *func_00224520(s32, s32);                      /* extern */
s32 func_00224BC0(u8, s32);                         /* extern */
s16 func_00225720();                                /* extern */
u8 func_00225E10();                                 /* extern */
s32 func_00AFDD10(s32, u8);                         /* extern */
s32 func_00B04700(u8, s32);                         /* extern */
M2C_UNK func_00B768F0();                            /* extern */
extern void *D_003EAF00;

void func_00B76A20(void) {
    s32 temp_a1_2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s3;
    u8 temp_a0;
    u8 temp_s3;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = D_003EAF00;
    if (temp_s2 != NULL) {
        M2C_FIELD(temp_s2, s8 *, 0x79C) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x79D) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x998) = 0;
        M2C_FIELD(temp_s2, u8 *, 0x7A0) = func_00225820();
        M2C_FIELD(temp_s2, s16 *, 0x79E) = func_00225720();
        M2C_FIELD(temp_s2, u8 *, 0x7A1) = func_00225E10();
        M2C_FIELD(temp_s2, s8 *, 0x7C2) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x7C4) = 0;
        M2C_FIELD(temp_s2, s32 *, 0x7C8) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x7CC) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x7CE) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x9A0) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x9A1) = 0;
        func_00B768F0();
        temp_s1 = D_003EAF00;
        if (temp_s1 != NULL) {
            temp_s0 = func_00225820() & 0xFF;
            var_s3 = 0;
            if ((s32) M2C_FIELD(temp_s1, u8 *, 0x7A1) > 0) {
                do {
                    temp_v0 = func_00224520(temp_s0 & 0xFF, func_002243B0(temp_s0 & 0xFF, var_s3) & 0xFF);
                    temp_a0 = M2C_FIELD(temp_v0, u8 *, 2);
                    temp_a1 = temp_s1 + (var_s3 & 0xFF);
                    var_s3 = (var_s3 + 1) & 0xFF;
                    M2C_FIELD(temp_a1, u8 *, 0xAA4) = temp_a0;
                    M2C_FIELD(temp_a1, u8 *, 0xAC4) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
                    M2C_FIELD(temp_a1, u8 *, 0xAE4) = (u8) M2C_FIELD(temp_a1, u8 *, 0xAA4);
                } while (var_s3 < (s32) M2C_FIELD(temp_s1, u8 *, 0x7A1));
            }
        }
        var_s0 = 0;
        if ((s32) M2C_FIELD(temp_s2, u8 *, 0x7A1) > 0) {
            do {
                temp_a1_2 = var_s0 & 0xFF;
                temp_a0_2 = temp_s2 + temp_a1_2;
                if ((M2C_FIELD(temp_a0_2, u8 *, 0x8D8) != 0) && (M2C_FIELD((temp_s2 + (temp_a1_2 * 4)), s32 *, 0x918) == 0)) {
                    M2C_FIELD(temp_a0_2, s8 *, 0xB84) = 1;
                    if (func_00B04700(M2C_FIELD(temp_s2, u8 *, 0x7A0), func_002243B0((s32) M2C_FIELD(temp_s2, u8 *, 0x7A0), var_s0) & 0xFF) == 1) {
                        M2C_FIELD(temp_a0_2, s8 *, 0xB84) = 0;
                    }
                    temp_s3 = M2C_FIELD(temp_s2, u8 *, 0x7A0);
                    if (func_00AFDD10(func_00224BC0(temp_s3, var_s0), temp_s3) == 1) {
                        M2C_FIELD(temp_a0_2, s8 *, 0xB84) = 0;
                    }
                } else {
                    M2C_FIELD(temp_a0_2, s8 *, 0xB84) = 0;
                }
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < (s32) M2C_FIELD(temp_s2, u8 *, 0x7A1));
        }
        M2C_FIELD(temp_s2, s8 *, 0xBA4) = 0;
        M2C_FIELD(temp_s2, s8 *, 0xBA5) = 0;
    }
}
