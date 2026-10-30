/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002781A0();                                /* extern */
extern char D_005E3611[];

void func_002C7B30(s32 arg0) {
    u8 *var_a0;
    u8 var_v1;

    if (func_002781A0() == 0) {
        var_a0 = ((void *)D_005E3611) + (arg0 * 0xF0);
        var_v1 = *var_a0 & 0xFE;
    } else {
        var_a0 = ((void *)D_005E3611) + (arg0 * 0xF0);
        var_v1 = *var_a0 | 1;
    }
    *var_a0 = var_v1;
}
