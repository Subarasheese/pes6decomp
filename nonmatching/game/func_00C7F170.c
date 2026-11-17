/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA870;
extern char D_00CCC070[];
extern char D_00CCC080[];

void func_00C7F170(void) {
    u8 *var_a4;
    s32 *var_a5;
    s32 var_a6;

    var_a6 = 0;
    var_a5 = (s32 *)D_00CCC070;
    var_a4 = (u8 *)D_00CCC080;
    do {
        if (*var_a5 != 0) {
            D_003EA870 = var_a6;
            var_a4[0x10] = (u8) ((var_a4[0x10] & ~2) | ((0 & 1) * 2));
            var_a4[0x10] = (u8) ((var_a4[0x10] & ~1) | 1);
        }
        var_a6 += 1;
        var_a5 += 1;
        var_a4 += 0x58;
    } while (var_a6 < 2);
}
