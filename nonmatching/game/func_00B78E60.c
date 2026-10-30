/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B7A8A0(s32, s32);                    /* extern */
extern char D_005926FF[];

void func_00B78E60(s32 arg0) {
    s32 var_a0;
    s32 var_a1;

    var_a0 = arg0;
    var_a1 = 0;
    if (var_a0 != 0) {
        goto block_4;
    }
    var_a0 = 5;
    if (((*(u8 *)D_005926FF) != 5) && ((*(u8 *)D_005926FF) != 0)) {
block_4:
        var_a1 = 1;
    }
    if (var_a1 != 0) {
        func_00B7A8A0(var_a0, var_a1);
    }
}
