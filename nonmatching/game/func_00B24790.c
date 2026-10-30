/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0D[];

void func_00B24790(s32 arg0) {
    u8 var_a0;

    if (arg0 != 0) {
        var_a0 = ((*(u8 *)D_00CBBF0D) & ~2) | 2;
    } else {
        var_a0 = ((*(u8 *)D_00CBBF0D) & ~8) | 8;
    }
    (*(u8 *)D_00CBBF0D) = var_a0;
    (*(u8 *)D_00CBBF0D) = ((*(u8 *)D_00CBBF0D) & ~1) | 1;
}
