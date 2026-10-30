/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C93860(s32, s32);                    /* extern */
extern char D_00591DCC[];

void func_00C936B0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_00C93860(var_s0 & 0xFF, (var_s0 ^ (*(u8 *)D_00591DCC)) & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 2);
}
