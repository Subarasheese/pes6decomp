/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BC550(s32, s32, s32);               /* extern */
extern s32 D_003E9920;
extern char D_00529A70[];

void func_001BC2B0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_001BC550((*(s32 *)D_00529A70), var_s0, D_003E9920);
        var_s0 += 1;
    } while (var_s0 < 8);
}
