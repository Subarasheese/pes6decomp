/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00173B38(void *arg0) {
    s32 temp_a6;
    s32 temp_v0;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    u32 temp_a1;
    void *var_a2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xBF0);
    var_a3 = 0;
    var_a2 = M2C_FIELD(arg0, void **, 0xB80);
    M2C_FIELD(arg0, s32 *, 0xB98) = 0;
    M2C_FIELD(arg0, s32 *, 0xBA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB9C) = 0;
    if (temp_v0 != 0) {
        var_a5 = 0;
        var_a4 = 0;
        if (temp_v0 > 0) {
            do {
                temp_a1 = M2C_FIELD(var_a2, u32 *, 0);
                temp_a6 = M2C_FIELD(var_a2, s32 *, 0x10);
                if (temp_a1 < 0x80U) {
                    var_a3 = 1;
                } else if (temp_a1 < 0xE0U) {
                    var_a3 = 2;
                } else if (temp_a1 < 0xF0U) {
                    var_a3 = 3;
                } else {
                    var_a3 = (temp_a1 <= 0xF7U) ? 4 : var_a3;
                }
                M2C_FIELD(var_a2, s32 *, 0x1C) = var_a5;
                M2C_FIELD(var_a2, s32 *, 0x20) = 0;
                var_a4 += var_a3;
                var_a5 += temp_a6;
                var_a2 += var_a3 * 0x24;
                M2C_FIELD(arg0, s32 *, 0xB98) = (s32) (M2C_FIELD(arg0, s32 *, 0xB98) + temp_a6);
            } while (var_a4 < M2C_FIELD(arg0, s32 *, 0xBF0));
        }
    }
}
