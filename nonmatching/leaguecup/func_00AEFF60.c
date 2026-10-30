/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_00225720();                                /* extern */
s32 func_0093DAE0(M2C_UNK32, void *);               /* extern */
M2C_UNK func_00AEF8A0();                            /* extern */
extern void *D_003EAD44;
extern char D_00B31DD0[];
extern char D_00B31DD4[];
extern char D_00B31DD8[];
extern char D_00B31DDC[];
extern char D_00B31DE0[];
extern char D_00B31DE4[];

void func_00AEFF60(void) {
    M2C_UNK32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    M2C_UNK32 *var_s3;
    s32 temp_a6;
    s32 temp_v0;
    s32 var_a0_2;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a5;
    s32 var_s0;
    s32 var_s4;
    s32 var_v1;
    s8 var_a4;
    u16 temp_s0;
    void *temp_a0;
    void *temp_s1;
    void *var_a0;
    void *var_a0_3;
    void *var_a1;
    void *var_a1_2;
    void *var_a1_3;
    void *var_a4_2;
    void *var_a5_2;
    void *var_a6;
    void *var_s2;

    temp_s1 = D_003EAD44;
    sp60 = (*(M2C_UNK32 *)D_00B31DD0);
    sp64 = (*(f32 *)D_00B31DD4);
    sp68 = (*(f32 *)D_00B31DD8);
    sp6C = (*(f32 *)D_00B31DDC);
    sp70 = (*(f32 *)D_00B31DE0);
    sp74 = (*(f32 *)D_00B31DE4);
    if (temp_s1 != NULL) {
        M2C_FIELD(temp_s1, s8 *, 0x2085) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x2086) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x2087) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x2330) = 0;
        M2C_FIELD(temp_s1, s16 *, 0x210A) = 0xFFFF;
        M2C_FIELD(temp_s1, s16 *, 0x2088) = func_00225720();
        M2C_FIELD(temp_s1, s8 *, 0x21CC) = 0x20;
        func_00AEF8A0();
        var_a3 = 0;
        var_a1 = temp_s1;
        do {
            var_a2 = 0;
            var_a0 = var_a1;
loop_3:
            M2C_FIELD(var_a0, s32 *, 8) = 0xFFFF;
            M2C_FIELD(var_a0, s32 *, 0xC) = 0xFFFF;
            var_a2 += 5;
            M2C_FIELD(var_a0, s32 *, 0x10) = 0xFFFF;
            M2C_FIELD(var_a0, s32 *, 0x14) = 0xFFFF;
            M2C_FIELD(var_a0, s32 *, 0x18) = 0xFFFF;
            var_a0 += 0x14;
            if (var_a2 < 0x14) {
                goto loop_3;
            }
            var_a3 += 1;
            var_a1 += 0x4A4;
        } while (var_a3 < 6);
        var_a0_2 = 0;
        var_a1_2 = temp_s1;
        do {
            M2C_FIELD(var_a1_2, s16 *, 0x2210) = 0xFFFF;
            var_a0_2 += 8;
            M2C_FIELD(var_a1_2, s16 *, 0x2212) = 0xFFFF;
            M2C_FIELD(var_a1_2, s16 *, 0x2214) = 0xFFFF;
            M2C_FIELD(var_a1_2, s16 *, 0x2216) = 0xFFFF;
            M2C_FIELD(var_a1_2, s16 *, 0x2218) = 0xFFFF;
            M2C_FIELD(var_a1_2, s16 *, 0x221A) = 0xFFFF;
            M2C_FIELD(var_a1_2, s16 *, 0x221C) = 0xFFFF;
            M2C_FIELD(var_a1_2, s16 *, 0x221E) = 0xFFFF;
            var_a1_2 += 0x10;
        } while (var_a0_2 < 0x78);
        var_s4 = 0;
        var_s0 = 0;
        var_s3 = &sp60;
        var_s2 = temp_s1;
        do {
            temp_v0 = func_0093DAE0(*var_s3, temp_s1 + (var_s4 * 2) + 0x2210);
            var_s0 += 1;
            M2C_FIELD(var_s2, s32 *, 0x21F8) = temp_v0;
            var_s4 += temp_v0;
            var_s3 += 4;
            var_s2 += 4;
        } while (var_s0 < 6);
        M2C_FIELD(temp_s1, s32 *, 0x2300) = var_s4;
        var_v1 = 0;
        var_a4 = 0;
        var_a5 = 0;
        var_a3_2 = 0;
        var_a2_2 = 0;
        var_a1_3 = temp_s1;
        var_a0_3 = temp_s1;
loop_10:
        if (var_v1 < M2C_FIELD(temp_s1, s32 *, 0x2300)) {
            temp_s0 = M2C_FIELD(var_a1_3, u16 *, 0x2210);
            if (temp_s0 != 0xFFFF) {
                var_a2_2 += 1;
                var_a1_3 += 2;
                M2C_FIELD((temp_s1 + (var_a4 * 0x4A4) + (var_a5 * 4)), s32 *, 8) = (s32) temp_s0;
                temp_a6 = M2C_FIELD(var_a0_3, s32 *, 0x21F8);
                var_v1 += 1;
                if ((temp_a6 == var_a2_2) || (var_a5 == 0x13)) {
                    if (temp_a6 == var_a2_2) {
                        var_a3_2 += 1;
                        var_a0_3 += 4;
                        var_a2_2 = 0;
                        if (var_a3_2 == 4) {
                            var_a5 += 1;
                            goto block_19;
                        }
                        var_a4 += 1;
                        var_a5 = 0;
                    } else {
block_19:
                        if (var_a5 == 0x13) {
                            var_a4 += 1;
                            var_a5 = 0;
                        }
                    }
                } else {
                    var_a5 += 1;
                }
                if (var_a4 >= 6) {

                } else {
                    goto loop_10;
                }
            }
        }
        M2C_FIELD(temp_s1, s8 *, 0x231C) = var_a4;
        var_a2_3 = 0;
        if ((s32) (u8) M2C_FIELD(temp_s1, s8 *, 0x231C) > 0) {
            var_a6 = temp_s1;
            var_a5_2 = temp_s1;
            do {
                M2C_FIELD(var_a6, s32 *, 0x2304) = 0;
                var_a3_3 = 0;
                var_a4_2 = var_a5_2;
loop_28:
                if (M2C_FIELD(var_a4_2, s32 *, 8) != 0xFFFF) {
                    var_a3_3 += 1;
                    var_a4_2 += 4;
                    M2C_FIELD(var_a6, s32 *, 0x2304) = (s32) (M2C_FIELD(var_a6, s32 *, 0x2304) + 1);
                    if (var_a3_3 < 0x14) {
                        goto loop_28;
                    }
                }
                var_a2_3 += 1;
                var_a6 += 4;
                var_a5_2 += 0x4A4;
            } while (var_a2_3 < (s32) (u8) M2C_FIELD(temp_s1, s8 *, 0x231C));
        }
        var_a1_4 = 0;
        do {
            temp_a0 = temp_s1 + var_a1_4;
            M2C_FIELD(temp_a0, s8 *, 0x21CF) = 0;
            var_a1_4 += 8;
            M2C_FIELD(temp_a0, s8 *, 0x21D0) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x21D1) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x21D2) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x21D3) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x21D4) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x21D5) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x21D6) = 0;
        } while (var_a1_4 < 0x20);
        M2C_FIELD(temp_s1, s16 *, 0x21F0) = 0xFFFF;
        M2C_FIELD(temp_s1, s16 *, 0x21F2) = 0xFFFF;
        M2C_FIELD(temp_s1, s16 *, 0x21F4) = 0xFFFF;
        M2C_FIELD(temp_s1, s16 *, 0x21F6) = 0xFFFF;
    }
}
