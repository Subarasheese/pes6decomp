/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00623430();                                /* extern */
extern char D_00657A80[];

s32 func_0062DC40(void *arg0) {
    s32 *var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a0 = ((void *)D_00657A80) + (func_00623430() * 0x34);
loop_1:
    if (M2C_FIELD(arg0, u8 *, 0x1B) != *var_a0) {
        var_a2 += 1;
        var_a0 += 4;
        if (var_a2 < 0xD) {
            goto loop_1;
        }
    }
    return var_a2;
}
