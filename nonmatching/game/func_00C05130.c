/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB52A0[];

s32 func_00C05130(u8 *arg0) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CB52A0);
loop_1:
    if (M2C_FIELD(var_a0, u8 *, 0x444) != *arg0) {
        var_a1 += 1;
        var_a0 += 0x40;
        if (var_a1 >= 0xA) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
