/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 *D_003E758C;
extern char D_00CBAA02[];

s32 func_00BCAAB0(void) {
    s32 var_a4;
    s32 var_v0;
    s32 var_a3;
    u8 *var_a2;

    var_v0 = 0x12C;
    var_a3 = *(u16 *)D_00CBAA02;
    var_a4 = 0;
    var_a2 = D_003E758C + var_a3 * 0x354;
    while (var_a3 >= 0) {
        u8 t = var_a2[0x34E];
        if (var_a4 != 0) {
            if (t != 4) {
                var_v0 = var_a3 & 0xFFFF;
                break;
            }
        } else if (t == 4) {
            var_a4 = 1;
        }
        var_a3 -= 1;
        var_a2 -= 0x354;
    }
    if (var_a4 != 0 && (var_v0 & 0xFFFF) == 0x12C) {
        var_v0 = 0;
    }
    return var_v0;
}
