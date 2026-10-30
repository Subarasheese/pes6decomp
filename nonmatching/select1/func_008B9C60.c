/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00245190(s32);                           /* extern */
s8 func_008B9070(s32, s32 *, s32, s32, s32 *, s32 *, u8 *, s32); /* extern */
extern char D_0053C740[];
extern char D_0053C840[];
extern char D_0053C940[];
extern char D_008D2D20[];
extern char D_008D2D24[];
extern char D_008D2D28[];
extern char D_008D2D2C[];
extern char D_008D2D30[];
extern char D_008D2D34[];
extern char D_008D2D38[];
extern char D_008D2D3C[];
extern char D_008D2D40[];
extern char D_008D2D44[];
extern char D_008D2D48[];
extern char D_008D2D4C[];
extern char D_008D2D50[];
extern char D_008D2D54[];
extern char D_008D2D58[];
extern char D_008D2D5C[];
extern char D_008DEFE0[];

void func_008B9C60(void) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    u8 spA0;
    u8 spA1;
    u8 spA2;
    u8 spA3;
    u8 spA4;
    u8 spA5;
    u8 spA6;
    u8 spA7;
    u8 spA8;
    u8 spA9;
    u8 spAA;
    u8 spAB;
    u8 spAC;
    u8 spAD;
    u8 spAE;
    u8 spAF;
    M2C_UNK *var_s1;
    s32 *var_a3;
    s32 *var_a4;
    s32 *var_a4_2;
    s32 *var_a5_2;
    s32 *var_s2;
    s32 *var_s3;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a3_2;
    s32 var_a6;
    s32 var_a7;
    s32 var_s4;
    s8 *var_s0;
    s8 temp_v0_2;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a5;
    u8 *var_a6_2;
    void *temp_v0;
    void *temp_v1;

    var_s4 = 0;
    var_s3 = ((void *)D_0053C840);
    var_s2 = ((void *)D_0053C740);
    var_s1 = ((void *)D_0053C940);
    var_s0 = ((void *)D_008DEFE0);
    do {
        temp_v0 = func_00245190(var_s4);
        var_a1 = &spA8;
        temp_v1 = temp_v0 + 0xF;
        var_a0 = 8;
        if (var_a1 != NULL) {
            do {
                *var_a1 = 0;
                var_a0 -= 1;
                var_a1 += 1;
            } while (var_a0 != 0);
        }
        var_a7 = 0;
        spAA = M2C_FIELD(temp_v1, u8 *, 4);
        var_a5 = &spA8;
        spA9 = M2C_FIELD(temp_v1, u8 *, 6);
        sp80 = (*(s32 *)D_008D2D20);
        spAC = M2C_FIELD(temp_v1, u8 *, 2);
        var_a4 = var_s3;
        spAB = M2C_FIELD(temp_v1, u8 *, 7);
        sp84 = (*(f32 *)D_008D2D24);
        spA8 = M2C_FIELD(temp_v1, u8 *, 5);
        spAE = M2C_FIELD(temp_v1, u8 *, 0);
        sp88 = (*(f32 *)D_008D2D28);
        sp8C = (*(f32 *)D_008D2D2C);
        sp90 = (*(f32 *)D_008D2D30);
        sp94 = (*(f32 *)D_008D2D34);
        sp98 = (*(f32 *)D_008D2D38);
        sp9C = (*(f32 *)D_008D2D3C);
        spAD = M2C_FIELD(temp_v1, u8 *, 3);
        spAF = M2C_FIELD(temp_v1, u8 *, 1);
loop_4:
        var_a6 = 0;
        var_a3 = &sp80;
loop_5:
        temp_a1 = *var_a3;
        if (*var_a5 == temp_a1) {
            *var_a4 = temp_a1;
        }
        var_a6 += 1;
        var_a3 += 4;
        if (var_a6 < 8) {
            goto loop_5;
        }
        var_a7 += 1;
        var_a5 += 1;
        var_a4 += 4;
        if (var_a7 < 8) {
            goto loop_4;
        }
        var_a1_2 = &spA0;
        var_a0_2 = 8;
        if (var_a1_2 != NULL) {
            do {
                *var_a1_2 = 0;
                var_a0_2 -= 1;
                var_a1_2 += 1;
            } while (var_a0_2 != 0);
        }
        var_a6_2 = &spA0;
        spA2 = M2C_FIELD(temp_v1, u8 *, 0xC);
        var_a5_2 = var_s2;
        spA1 = M2C_FIELD(temp_v1, u8 *, 0xE);
        sp60 = (*(s32 *)D_008D2D40);
        spA4 = M2C_FIELD(temp_v1, u8 *, 0xA);
        spA0 = M2C_FIELD(temp_v1, u8 *, 0xD);
        sp64 = (*(f32 *)D_008D2D44);
        spA3 = M2C_FIELD(temp_v1, u8 *, 0xF);
        spA5 = M2C_FIELD(temp_v1, u8 *, 0xB);
        var_a3_2 = 0;
        sp68 = (*(f32 *)D_008D2D48);
        sp6C = (*(f32 *)D_008D2D4C);
        sp70 = (*(f32 *)D_008D2D50);
        sp74 = (*(f32 *)D_008D2D54);
        sp78 = (*(f32 *)D_008D2D58);
        sp7C = (*(f32 *)D_008D2D5C);
        spA6 = M2C_FIELD(temp_v1, u8 *, 8);
        spA7 = M2C_FIELD(temp_v1, u8 *, 9);
loop_12:
        var_a2 = 0;
        var_a4_2 = &sp60;
loop_13:
        temp_a0 = *var_a4_2;
        if (*var_a6_2 == temp_a0) {
            *var_a5_2 = temp_a0;
        }
        var_a2 += 1;
        var_a4_2 += 4;
        if (var_a2 < 8) {
            goto loop_13;
        }
        var_a3_2 += 1;
        var_a6_2 += 1;
        var_a5_2 += 4;
        if (var_a3_2 < 8) {
            goto loop_12;
        }
        M2C_FIELD(var_s1, u8 *, 1) = (u8) M2C_FIELD(temp_v0, u8 *, 1);
        M2C_FIELD(var_s1, u8 *, 8) = (u8) M2C_FIELD(temp_v0, u8 *, 2);
        M2C_FIELD(var_s1, u8 *, 3) = (u8) M2C_FIELD(temp_v0, u8 *, 0);
        M2C_FIELD(var_s1, u8 *, 5) = (u8) M2C_FIELD(temp_v0, u8 *, 4);
        M2C_FIELD(var_s1, u8 *, 2) = (u8) M2C_FIELD(temp_v0, u8 *, 3);
        M2C_FIELD(var_s1, s8 *, 4) = (s8) ((s8) M2C_FIELD(var_s1, u8 *, 5) + ((s8) M2C_FIELD(var_s1, u8 *, 8) * 2));
        temp_v0_2 = func_008B9070(var_s4, &sp60, var_a2, var_a3_2, var_a4_2, var_a5_2, var_a6_2, var_a7);
        var_s4 += 1;
        *var_s0 = temp_v0_2;
        var_s3 += 0x20;
        var_s2 += 0x20;
        var_s1 += 8;
        var_s0 += 1;
    } while (var_s4 < 8);
}
