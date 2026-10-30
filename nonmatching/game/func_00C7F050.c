/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA870;
extern char D_00CCC070[];
extern char D_00CCC080[];

void func_00C7F050(s32 arg0) {
    M2C_UNK *var_a4;
    s32 *var_a5;
    s32 var_a6;

    var_a6 = 0;
    var_a5 = ((void *)D_00CCC070);
    var_a4 = ((void *)D_00CCC080);
    do {
        if (*var_a5 != 0) {
            D_003EA870 = var_a6;
            M2C_FIELD(var_a4, u8 *, 0x10) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x10) & ~8) | ((arg0 & 1) * 8));
            M2C_FIELD(var_a4, u8 *, 0x10) = (u8) ((M2C_FIELD(var_a4, u8 *, 0x10) & ~4) | 4);
        }
        var_a6 += 1;
        var_a5 += 4;
        var_a4 += 0x58;
    } while (var_a6 < 2);
}
