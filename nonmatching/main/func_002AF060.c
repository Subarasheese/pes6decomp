/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];
extern char D_005900B0[];

s32 func_002AF060(s32 *arg0, f32 fparg0, f32 fparg1) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a5_3;
    s32 temp_a5_4;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 var_a1;
    s32 var_a4;
    s32 var_v0;

    var_a1 = 0x05F5E100;
    var_v0 = 0;
    var_a3 = ((void *)D_0058E7F0);
    var_a2 = ((void *)D_005900B0);
    var_a4 = 0;
    temp_f0 = (s32) ((100.0f * fparg1) / 256.0f);
    temp_f0_2 = (s32) ((100.0f * fparg0) / 256.0f);
    do {
        if (M2C_FIELD(M2C_FIELD(var_a3, void **, 4), u8 *, 0x2C) != 0) {
            temp_a6 = (s32) ((100.0f * M2C_FIELD(var_a3, f32 *, 0xE8)) / 256.0f) - temp_f0;
            temp_a5 = (s32) ((100.0f * M2C_FIELD(var_a3, f32 *, 0xE0)) / 256.0f) - temp_f0_2;
            temp_a5_2 = (temp_a5 * temp_a5) + (temp_a6 * temp_a6);
            if (temp_a5_2 < var_a1) {
                var_a1 = temp_a5_2;
                var_v0 = (var_a4 + 1) & 0xFF;
            }
        }
        if (M2C_FIELD(M2C_FIELD(var_a2, void **, 4), u8 *, 0x2C) != 0) {
            temp_a6_2 = (s32) ((100.0f * M2C_FIELD(var_a2, f32 *, 0xE8)) / 256.0f) - temp_f0;
            temp_a5_3 = (s32) ((100.0f * M2C_FIELD(var_a2, f32 *, 0xE0)) / 256.0f) - temp_f0_2;
            temp_a5_4 = (temp_a5_3 * temp_a5_3) + (temp_a6_2 * temp_a6_2);
            if (temp_a5_4 < var_a1) {
                var_a1 = temp_a5_4;
                var_v0 = (var_a4 + 0xC) & 0xFF;
            }
        }
        var_a4 += 1;
        var_a3 += 0x240;
        var_a2 += 0x240;
    } while (var_a4 < 0xB);
    *arg0 = var_a1;
    return var_v0;
}
