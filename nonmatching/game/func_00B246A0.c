/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0D[];

void func_00B246A0(s32 arg0) {
    u8 var_a0;

    if (arg0 != 0) {
        var_a0 = ((*(u8 *)D_00CBBF0D) & ~4) | 4;
    } else {
        var_a0 = ((*(u8 *)D_00CBBF0D) & ~4) | ((0 & 1) * 4);
    }
    (*(u8 *)D_00CBBF0D) = var_a0;
}
