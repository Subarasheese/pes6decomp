/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u8 D_003E9E20;
extern char D_0065BAB0[];
extern char D_0065DEC0[];

void func_0064E930(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s5;
    s32 *var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    var_s5 = ((void *)D_0065DEC0);
    var_s3 = 0;
    do {
        var_s4 = 0;
        if (0 < 4) {
            do {
                var_s2 = 0;
                var_s0 = ((void *)D_0065BAB0);
                var_s1 = var_s5 + (var_s4 * 0x3C);
loop_4:
                if (var_s3 != D_003E9E20) {
                    *var_s1 = -1;
                } else {
                    *var_s1 = func_001BC3D0(var_s3, M2C_FIELD(var_s0, s32 *, 0), var_s4, M2C_FIELD(var_s0, s32 *, 4));
                }
                var_s2 += 1;
                var_s1 += 4;
                var_s0 += 8;
                if (var_s2 < 0xF) {
                    goto loop_4;
                }
                var_s4 += 1;
            } while (var_s4 < 4);
        }
        var_s3 += 1;
        var_s5 += 0xF0;
    } while (var_s3 < 8);
}
