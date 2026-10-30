/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0021F710(s32);                             /* extern */
s32 func_0021FA50(s32);                             /* extern */

s32 func_00BA4D00(s32 arg0) {
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

    var_s2 = 0;
    var_s1 = 0x40;
    do {
        if (arg0 == func_0021FA50(var_s1 & 0xFFFF)) {
            var_s2 += 1;
        }
        if (arg0 == func_0021F710(var_s1 & 0xFFFF)) {
            var_s2 += 1;
        }
        var_s1 += 1;
    } while (var_s1 < 0x54);
    var_s3 = 0;
    var_s2_3 = 0x54;
    do {
        if (arg0 == func_0021FA50(var_s2_3 & 0xFFFF)) {
            var_s3 += 1;
        }
        if (arg0 == func_0021F710(var_s2_3 & 0xFFFF)) {
            var_s3 += 1;
        }
        var_s2_3 += 1;
    } while (var_s2_3 < 0x68);
    var_s2_2 = 0;
    if (arg0 == func_0021FA50(0xA6)) {
        var_s2_2 = 1;
    }
    if (arg0 == func_0021F710(0xA6)) {
        var_s2_2 += 1;
    }
    var_s3_2 = 0;
    var_s2_4 = 0x68;
    do {
        if (arg0 == func_0021FA50(var_s2_4 & 0xFFFF)) {
            var_s3_2 += 1;
        }
        if (arg0 == func_0021F710(var_s2_4 & 0xFFFF)) {
            var_s3_2 += 1;
        }
        var_s2_4 += 1;
    } while (var_s2_4 < 0x7C);
    var_s2_5 = 0x7C;
    var_s3_3 = 0;
    do {
        if (arg0 == func_0021FA50(var_s2_5 & 0xFFFF)) {
            var_s3_3 += 1;
        }
        if (arg0 == func_0021F710(var_s2_5 & 0xFFFF)) {
            var_s3_3 += 1;
        }
        var_s2_5 += 1;
    } while (var_s2_5 < 0x8E);
    var_s2_6 = 0x8E;
    var_s3_4 = 0;
    do {
        if (arg0 == func_0021FA50(var_s2_6 & 0xFFFF)) {
            var_s3_4 += 1;
        }
        if (arg0 == func_0021F710(var_s2_6 & 0xFFFF)) {
            var_s3_4 += 1;
        }
        var_s2_6 += 1;
    } while (var_s2_6 < 0xA2);
    var_s2_7 = 0xA2;
    var_s3_5 = 0;
    do {
        if (arg0 == func_0021FA50(var_s2_7 & 0xFFFF)) {
            var_s3_5 += 1;
        }
        if (arg0 == func_0021F710(var_s2_7 & 0xFFFF)) {
            var_s3_5 += 1;
        }
        var_s2_7 += 1;
    } while (var_s2_7 < 0xBA);
    var_s2_8 = 0xBA;
    var_s3_6 = 0;
    do {
        if (arg0 == func_0021FA50(var_s2_8 & 0xFFFF)) {
            var_s3_6 += 1;
        }
        if (arg0 == func_0021F710(var_s2_8 & 0xFFFF)) {
            var_s3_6 += 1;
        }
        var_s2_8 += 1;
    } while (var_s2_8 < 0xCC);
    return var_s2 + var_s3 + var_s2_2 + var_s3_2 + var_s3_3 + var_s3_4 + var_s3_5 + var_s3_6;
}
