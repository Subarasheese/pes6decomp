/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B8C760[];

s32 func_00B26EF0(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;
    u16 *var_a1;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 == 0) {
        goto block_8;
    }
    var_v0 = 0;
    var_a1 = ((void *)D_00B8C760);
loop_3:
    if (temp_a0 != *var_a1) {
        var_v0 += 1;
        var_a1 += 2;
        if (var_v0 >= 0x138A) {
block_8:
            return -1;
        }
        goto loop_3;
    }
    return var_v0;
}
