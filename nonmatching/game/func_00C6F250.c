/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA814;
extern char D_00CCBBF0[];
extern char D_00CCBC00[];

void func_00C6F250(s32 arg0) {
    M2C_UNK *var_a4;
    s32 *var_a5;
    s32 var_a6;

    if (arg0 == 0) {
        var_a6 = 0;
        var_a5 = ((void *)D_00CCBBF0);
        var_a4 = ((void *)D_00CCBC00);
        do {
            if (*var_a5 != 0) {
                M2C_FIELD(var_a4, u8 *, 0x21) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x21) & ~4) | ((arg0 & 1) * 4));
                M2C_FIELD(var_a4, u8 *, 0x21) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x21) & ~2) | 2);
            }
            var_a6 += 1;
            var_a5 += 4;
            var_a4 += 0x40;
        } while (var_a6 < 2);
        D_003EA814 = var_a6 - 1;
    }
}
