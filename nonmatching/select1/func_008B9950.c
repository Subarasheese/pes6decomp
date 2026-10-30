/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, M2C_UNK *, M2C_UNK);  /* extern */
void *func_00245190(s32);                           /* extern */
extern s8 D_003E9AC0;
extern char D_0053C590[];
extern char D_0053C740[];
extern char D_0053C840[];
extern char D_0053C940[];
extern char D_008D2D60[];
extern char D_008D2D64[];
extern char D_008D2D68[];
extern char D_008D2D6C[];
extern char D_008D2D70[];
extern char D_008D2D74[];
extern char D_008D2D78[];
extern char D_008D2D7C[];
extern char D_008D2D80[];
extern char D_008D2D84[];
extern char D_008D2D88[];
extern char D_008D2D8C[];
extern char D_008D2D90[];
extern char D_008D2D94[];
extern char D_008D2D98[];
extern char D_008D2D9C[];

void func_008B9950(void) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s8 *sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    s8 *spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 *var_a4;
    s32 *var_a5_2;
    s32 *var_a6;
    s32 *var_a7_2;
    s32 *var_s2;
    s32 *var_s3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_a4_2;
    s32 var_a7;
    s32 var_s4;
    s32 var_t0;
    s8 **var_a2;
    s8 **var_a2_2;
    s8 **var_a5;
    s8 **var_a6_2;
    void *temp_a0;

    var_s4 = 0;
    var_s3 = ((void *)D_0053C840);
    var_s2 = ((void *)D_0053C740);
    var_s1 = ((void *)D_0053C940);
    var_s0 = ((void *)D_0053C590);
    do {
        temp_a0 = func_00245190(var_s4);
        temp_v1 = temp_a0 + 0xF;
        if (D_003E9AC0 == 1) {
            var_a2 = &spC0;
            var_a1 = 0x20;
            if (var_a2 != NULL) {
                do {
                    *var_a2 = 0;
                    var_a1 -= 1;
                    var_a2 += 1;
                } while (var_a1 != 0);
            }
            spD8 = temp_v1;
            spC0 = temp_v1 + 5;
            var_t0 = 0;
            var_a6 = var_s3;
            spC4 = temp_v1 + 6;
            var_a5 = &spC0;
            spC8 = temp_v1 + 4;
            spCC = temp_v1 + 7;
            spD0 = temp_v1 + 2;
            spD4 = temp_v1 + 3;
            spDC = temp_v1 + 1;
            spA0 = (*(s32 *)D_008D2D60);
            spA4 = (*(f32 *)D_008D2D64);
            spA8 = (*(f32 *)D_008D2D68);
            spAC = (*(f32 *)D_008D2D6C);
            spB0 = (*(f32 *)D_008D2D70);
            spB4 = (*(f32 *)D_008D2D74);
            spB8 = (*(f32 *)D_008D2D78);
            spBC = (*(f32 *)D_008D2D7C);
            do {
                var_a7 = 0;
                var_a4 = &spA0;
loop_6:
                temp_a2 = *var_a4;
                if (temp_a2 == *var_a6) {
                    **var_a5 = (s8) temp_a2;
                }
                var_a7 += 1;
                var_a4 += 4;
                if (var_a7 < 8) {
                    goto loop_6;
                }
                var_t0 += 1;
                var_a6 += 4;
                var_a5 += 4;
            } while (var_t0 < 8);
            var_a2_2 = &sp80;
            var_a1_2 = 0x20;
            if (var_a2_2 != NULL) {
                do {
                    *var_a2_2 = 0;
                    var_a1_2 -= 1;
                    var_a2_2 += 1;
                } while (var_a1_2 != 0);
            }
            sp80 = temp_v1 + 0xD;
            var_a4_2 = 0;
            sp84 = temp_v1 + 0xE;
            sp88 = temp_v1 + 0xC;
            sp8C = temp_v1 + 0xF;
            sp90 = temp_v1 + 0xA;
            sp94 = temp_v1 + 0xB;
            sp98 = temp_v1 + 8;
            sp9C = temp_v1 + 9;
            var_a7_2 = var_s2;
            var_a6_2 = &sp80;
            sp60 = (*(s32 *)D_008D2D80);
            sp64 = (*(f32 *)D_008D2D84);
            sp68 = (*(f32 *)D_008D2D88);
            sp6C = (*(f32 *)D_008D2D8C);
            sp70 = (*(f32 *)D_008D2D90);
            sp74 = (*(f32 *)D_008D2D94);
            sp78 = (*(f32 *)D_008D2D98);
            sp7C = (*(f32 *)D_008D2D9C);
            do {
                var_a3 = 0;
                var_a5_2 = &sp60;
loop_14:
                temp_a1 = *var_a5_2;
                if (temp_a1 == *var_a7_2) {
                    **var_a6_2 = (s8) temp_a1;
                }
                var_a3 += 1;
                var_a5_2 += 4;
                if (var_a3 < 8) {
                    goto loop_14;
                }
                var_a4_2 += 1;
                var_a7_2 += 4;
                var_a6_2 += 4;
            } while (var_a4_2 < 8);
            M2C_FIELD(temp_a0, s8 *, 0) = (s8) M2C_FIELD(var_s1, s8 *, 3);
            M2C_FIELD(temp_a0, s8 *, 1) = (s8) M2C_FIELD(var_s1, s8 *, 1);
            M2C_FIELD(temp_a0, s8 *, 2) = (s8) M2C_FIELD(var_s1, s8 *, 8);
            M2C_FIELD(temp_a0, s8 *, 3) = (s8) M2C_FIELD(var_s1, s8 *, 2);
            M2C_FIELD(temp_a0, s8 *, 4) = (s8) M2C_FIELD(var_s1, s8 *, 5);
        } else {
            func_001C4730(temp_a0, var_s0, 0x24);
        }
        var_s4 += 1;
        var_s3 += 0x20;
        var_s2 += 0x20;
        var_s1 += 8;
        var_s0 += 0x36;
    } while (var_s4 < 8);
}
