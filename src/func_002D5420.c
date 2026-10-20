/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 D_003E9DA0;

void func_002D5420(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 >= 0x10) {
        var_a0 = 0;
    }
    D_003E9DA0 = var_a0;
}
