/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1458[];
extern char D_008B1460[];
extern char D_008B1466[];

u32 func_0084AF10(u32 arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a5;
    s32 var_v0_2;
    s32 var_v1;
    s64 temp_a1;
    s64 temp_a3;
    u32 var_a4;
    u32 var_v0;

    if (arg0 == 0) {
        var_v0 = 0;
    } else {
        var_a4 = (*(u32 *)D_008B1460);
        temp_a1 = (*(s16 *)D_008B1466) + 1;
        (*(s16 *)D_008B1466) = (s16) temp_a1;
        temp_a3 = (s64) (temp_a1 << 0x30) >> 0x30;
        if (var_a4 != (*(s32 *)D_008B1458)) {
            var_a4 = (u32) ((var_a4 * 0x3AB1E085) + 0x0EF1463D) % 127015699U;
        } else {
            var_a5 = 0;
            if (temp_a3 > 0) {
                if (temp_a3 >= 9) {
                    var_a1 = 0;
                    var_v0_2 = 0;
                    if ((temp_a3 >= 0) && (temp_a3 < 0x7FFFFFFF)) {
                        var_v0_2 = 1;
                    }
                    if (var_v0_2 != 0) {
                        temp_v0 = temp_a3 & 0x80000000;
                        var_v1 = 1;
                        if ((temp_v0 == 0) && (temp_v0 != 0)) {
                            var_v1 = 0;
                        }
                        if (var_v1 != 0) {
                            var_a1 = 1;
                        }
                    }
                    if (var_a1 != 0) {
                        do {
                            var_a4 = (u32) ((((u32) ((((u32) ((((u32) ((((u32) ((((u32) ((((u32) ((((u32) ((var_a4 * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U) * 0x3AB1E085) + 0x0EF1463D) % 127015699U;
                            var_a5 += 8;
                        } while (var_a5 < (temp_a3 - 8));
                    }
                }
                if (var_a5 < temp_a3) {
                    do {
                        var_a4 = (u32) ((var_a4 * 0x3AB1E085) + 0x0EF1463D) % 127015699U;
                        var_a5 += 1;
                    } while (var_a5 < temp_a3);
                }
            }
        }
        (*(u32 *)D_008B1460) = var_a4;
        var_v0 = var_a4 % arg0;
    }
    return var_v0;
}
