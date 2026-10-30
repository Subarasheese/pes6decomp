/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00B29640(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char D_00591C09[];
extern char D_00591E80[];
extern char D_00591E84[];
extern char D_00591E88[];
extern char D_00591E8C[];
extern char D_00591E90[];
extern char D_00591E94[];

void func_00906FA0(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f1;
    f32 var_f20;
    f32 var_f21;
    f32 var_f22;
    f32 var_f2;
    f32 var_f3;
    s32 var_a1;
    s32 var_a4;

    var_a2 = ((void *)D_0058E7F0);
    var_a1 = 0;
    var_f1 = 13465.0f;
    var_f3 = -13465.0f;
    var_f2 = 13465.0f;
    do {
        if ((M2C_FIELD(M2C_FIELD(var_a2, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_a2, u8 *, 0x16) != 0xFF)) {
            temp_f0 = M2C_FIELD(var_a2, f32 *, 0x6C);
            if (temp_f0 < var_f1) {
                var_f2 = var_f1;
                var_f1 = temp_f0;
            } else if (temp_f0 < var_f2) {
                var_f2 = temp_f0;
            }
            if (var_f3 < temp_f0) {
                var_f3 = temp_f0;
            }
        }
        var_a1 += 1;
        var_a2 += 0x240;
    } while (var_a1 < 0xB);
    if (!(var_f2 < 13465.0f)) {
        var_f2 = var_f1;
    }
    (*(f32 *)D_00591E80) = var_f3;
    var_a5 = ((void *)D_005900B0);
    var_a4 = 0;
    var_f22 = -13465.0f;
    (*(f32 *)D_00591E88) = 0.5f * (var_f3 + var_f2);
    var_f20 = 13465.0f;
    (*(f32 *)D_00591E90) = var_f2;
    var_f21 = -13465.0f;
    do {
        if ((M2C_FIELD(M2C_FIELD(var_a5, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_a5, u8 *, 0x16) != 0xFF)) {
            temp_f0_2 = M2C_FIELD(var_a5, f32 *, 0x6C);
            if (var_f22 < temp_f0_2) {
                var_f21 = var_f22;
                var_f22 = temp_f0_2;
            } else if (var_f21 < temp_f0_2) {
                var_f21 = temp_f0_2;
            }
            if (temp_f0_2 < var_f20) {
                var_f20 = temp_f0_2;
            }
        }
        var_a4 += 1;
        var_a5 += 0x240;
    } while (var_a4 < 0xB);
    if ((*(u8 *)D_00591C09) == 5) {
        if (func_00B29640(5, 0xC6526400, 0x46526400, 0x3F000000, var_a4, var_a5) == 0) {
            var_f21 = 1024.0f + (*(f32 *)D_00591E80);
        }
    }
    if (var_f21 <= -13465.0f) {
        var_f21 = var_f22;
    }
    if (var_f21 <= -13465.0f) {
        var_f21 = 1024.0f + (*(f32 *)D_00591E80);
    }
    if (var_f20 >= 13465.0f) {
        var_f20 = 1024.0f + (*(f32 *)D_00591E90);
    }
    (*(f32 *)D_00591E84) = var_f20;
    (*(f32 *)D_00591E94) = var_f21;
    (*(f32 *)D_00591E8C) = 0.5f * (var_f20 + var_f21);
}
