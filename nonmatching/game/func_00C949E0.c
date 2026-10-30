/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD971[];

void func_00C949E0(s32 arg0) {
    u8 var_a0;

    if (arg0 != 0) {
        var_a0 = (*(u8 *)D_00CCD971) | 8;
    } else {
        var_a0 = (*(u8 *)D_00CCD971) & 0xF7;
    }
    (*(u8 *)D_00CCD971) = var_a0;
}
