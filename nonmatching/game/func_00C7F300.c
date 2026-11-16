/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA870;
extern s32 D_00CCC070[];
extern u8 D_00CCC080[];

void func_00C7F300(void) {
    u8 *var_a2;
    s32 *var_a3;
    s32 var_a4;

    var_a4 = 0;
    var_a3 = D_00CCC070;
    var_a2 = D_00CCC080;
    do {
        if (*var_a3 != 0) {
            D_003EA870 = var_a4;
            var_a2[0x10] = (u8) ((var_a2[0x10] & ~2) | 2);
            var_a2[0x10] = (u8) ((var_a2[0x10] & ~1) | 1);
            var_a2[0x10] = (u8) ((var_a2[0x10] & ~8) | 8);
            var_a2[0x10] = (u8) ((var_a2[0x10] & ~4) | 4);
        }
        var_a4 += 1;
        var_a3 += 1;
        var_a2 += 0x58;
    } while (var_a4 < 2);
}
