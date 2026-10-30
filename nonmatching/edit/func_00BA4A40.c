/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021F170(s32);
extern void func_002E9370(int);
s32 func_0021F710(s32);                             /* extern */

void func_00BA4A40(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s2_7;
    s32 var_s2_8;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;

    var_s2 = 0;
    var_s1 = 0x40;
    do {
        if (arg0 == func_0021F710(var_s1 & 0xFFFF)) {
            temp_v0 = func_0021F170(var_s1 & 0xFFFF);
            temp_v1 = var_s1 + 0x33;
            var_s2 = 1;
            M2C_FIELD(temp_v0, s32 *, 0x3C) = temp_v1;
            M2C_FIELD(temp_v0, s32 *, 0x40) = temp_v1;
            M2C_FIELD(temp_v0, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x45) = 0;
        }
        var_s1 += 1;
    } while (var_s1 < 0x54);
    var_s3 = 0;
    var_s2_2 = 0x54;
    do {
        if (arg0 == func_0021F710(var_s2_2 & 0xFFFF)) {
            temp_v0_2 = func_0021F170(var_s2_2 & 0xFFFF);
            temp_v1_2 = var_s2_2 + 0x33;
            var_s3 = 1;
            M2C_FIELD(temp_v0_2, s32 *, 0x3C) = temp_v1_2;
            M2C_FIELD(temp_v0_2, s32 *, 0x40) = temp_v1_2;
            M2C_FIELD(temp_v0_2, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x45) = 0;
        }
        var_s2_2 += 1;
    } while (var_s2_2 < 0x68);
    var_s2_3 = 0;
    if (arg0 == func_0021F710(0xA6)) {
        temp_v0_3 = func_0021F170(0xA6);
        var_s2_3 = 1;
        M2C_FIELD(temp_v0_3, s32 *, 0x3C) = 0xD9;
        M2C_FIELD(temp_v0_3, s32 *, 0x40) = 0xD9;
        M2C_FIELD(temp_v0_3, s8 *, 0x44) = 0;
        M2C_FIELD(temp_v0_3, s8 *, 0x45) = 0;
    }
    var_s3_2 = 0;
    var_s2_4 = 0x68;
    do {
        if (arg0 == func_0021F710(var_s2_4 & 0xFFFF)) {
            temp_v0_4 = func_0021F170(var_s2_4 & 0xFFFF);
            temp_v1_3 = var_s2_4 + 0x33;
            var_s3_2 = 1;
            M2C_FIELD(temp_v0_4, s32 *, 0x3C) = temp_v1_3;
            M2C_FIELD(temp_v0_4, s32 *, 0x40) = temp_v1_3;
            M2C_FIELD(temp_v0_4, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0_4, s8 *, 0x45) = 0;
        }
        var_s2_4 += 1;
    } while (var_s2_4 < 0x7C);
    var_s2_5 = 0x7C;
    var_s3_3 = 0;
    do {
        if (arg0 == func_0021F710(var_s2_5 & 0xFFFF)) {
            temp_v0_5 = func_0021F170(var_s2_5 & 0xFFFF);
            temp_v1_4 = var_s2_5 + 0x33;
            var_s3_3 = 1;
            M2C_FIELD(temp_v0_5, s32 *, 0x3C) = temp_v1_4;
            M2C_FIELD(temp_v0_5, s32 *, 0x40) = temp_v1_4;
            M2C_FIELD(temp_v0_5, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0_5, s8 *, 0x45) = 0;
        }
        var_s2_5 += 1;
    } while (var_s2_5 < 0x8E);
    var_s2_6 = 0x8E;
    var_s3_4 = 0;
    do {
        if (arg0 == func_0021F710(var_s2_6 & 0xFFFF)) {
            temp_v0_6 = func_0021F170(var_s2_6 & 0xFFFF);
            temp_v1_5 = var_s2_6 + 0x33;
            var_s3_4 = 1;
            M2C_FIELD(temp_v0_6, s32 *, 0x3C) = temp_v1_5;
            M2C_FIELD(temp_v0_6, s32 *, 0x40) = temp_v1_5;
            M2C_FIELD(temp_v0_6, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0_6, s8 *, 0x45) = 0;
        }
        var_s2_6 += 1;
    } while (var_s2_6 < 0xA2);
    var_s2_7 = 0xA2;
    var_s3_5 = 0;
    do {
        if (arg0 == func_0021F710(var_s2_7 & 0xFFFF)) {
            temp_v0_7 = func_0021F170(var_s2_7 & 0xFFFF);
            temp_v1_6 = var_s2_7 + 0x33;
            var_s3_5 = 1;
            M2C_FIELD(temp_v0_7, s32 *, 0x3C) = temp_v1_6;
            M2C_FIELD(temp_v0_7, s32 *, 0x40) = temp_v1_6;
            M2C_FIELD(temp_v0_7, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0_7, s8 *, 0x45) = 0;
        }
        var_s2_7 += 1;
    } while (var_s2_7 < 0xBA);
    var_s2_8 = 0xBA;
    var_s3_6 = 0;
    do {
        if (arg0 == func_0021F710(var_s2_8 & 0xFFFF)) {
            temp_v0_8 = func_0021F170(var_s2_8 & 0xFFFF);
            temp_v1_7 = var_s2_8 + 0x33;
            var_s3_6 = 1;
            M2C_FIELD(temp_v0_8, s32 *, 0x3C) = temp_v1_7;
            M2C_FIELD(temp_v0_8, s32 *, 0x40) = temp_v1_7;
            M2C_FIELD(temp_v0_8, s8 *, 0x44) = 0;
            M2C_FIELD(temp_v0_8, s8 *, 0x45) = 0;
        }
        var_s2_8 += 1;
    } while (var_s2_8 < 0xCC);
    if ((arg0 != 0x1BA) && ((0 | var_s2 | var_s3 | var_s2_3 | var_s3_2 | var_s3_3 | var_s3_4 | var_s3_5 | var_s3_6) != 0)) {
        func_002E9370(0x40000);
    }
}
