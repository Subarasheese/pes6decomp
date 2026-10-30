/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134270(M2C_UNK);                     /* extern */
extern char D_011D6E00[];

s32 func_00134328(void) {
    s32 var_s0;
    s8 *var_v1;

    var_v1 = ((void *)D_011D6E00);
    var_s0 = 0;
loop_1:
    if (*var_v1 != 0) {
        var_s0 += 1;
        var_v1 += 1;
        if (var_s0 >= 0x100) {
            return 0;
        }
        goto loop_1;
    }
    *var_v1 = 1;
    func_00134270(1);
    return var_s0;
}
