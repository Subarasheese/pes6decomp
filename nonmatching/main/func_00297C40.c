/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0027B5C0(int);
M2C_UNK func_0027C230(s32, M2C_UNK);                /* extern */
extern s32 (*D_003AAF60)(s32);

void func_00297C40(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = arg0;
    if (arg0 != 0x26) {

    } else {
        var_s0 += D_003AAF60(arg1) & 0xFF;
    }
    func_0027C230(func_0027B5C0(var_s0), 0);
}
