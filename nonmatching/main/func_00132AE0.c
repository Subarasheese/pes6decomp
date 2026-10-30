/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C6158(s32 **, u32, M2C_UNK, M2C_UNK *, s32); /* extern */
extern char D_003FB790[];
extern char D_003FB9AC[];
extern M2C_UNK func_001331D0;

void func_00132AE0(void) {
    s32 *sp20;
    s32 **var_a2;
    s32 **var_a6;
    s32 *temp_a3;
    s32 *var_a3;
    s32 *var_a5;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a4;
    s32 var_a4_2;
    u32 var_s0;

    var_a4 = 0;
    var_s0 = 0;
    (*(s32 *)D_003FB9AC) = 0;
    var_a3 = ((void *)D_003FB790);
    var_a2 = &sp20;
    do {
        temp_v1 = M2C_FIELD(var_a3, s32 *, 0);
        if ((temp_v1 != 6) && (temp_v1 != 5)) {

        } else if (!(M2C_FIELD(var_a3, f32 *, 0x1C) <= 0.0f)) {
            *var_a2 = var_a3;
            var_s0 += 1;
            var_a2 += 4;
        }
        var_a4 += 1;
        var_a3 += 0xB0;
    } while (var_a4 < 3);
    if (var_s0 != 0) {
        func_001C6158(&sp20, var_s0, 4, &func_001331D0, var_a4);
        if (var_s0 < 8U) {

        } else {
            var_s0 = 8;
        }
        var_a4_2 = 0;
        (*(s32 *)D_003FB9AC) = (s32) var_s0;
        if ((s32) var_s0 > 0) {
            var_a6 = &sp20;
            var_a5 = ((void *)D_003FB790);
            do {
                temp_a3 = *var_a6;
                temp_a0 = *temp_a3;
                if ((temp_a0 == 6) || (temp_a0 == 5)) {
                    M2C_FIELD(var_a5, s32 **, 0x3B0) = temp_a3;
                }
                var_a4_2 += 1;
                var_a6 += 4;
                var_a5 += 4;
            } while (var_a4_2 < *(s32 *)0x3FB9AC);
        }
    }
}
