/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BBC[];

void func_00371080(void) {
    s32 var_a0;
    s32 var_v1;

    if ((*(u8 *)D_00591BBC) != 0) {
        var_v1 = (*(u8 *)D_00591BBC) + 1;
    } else {
        var_v1 = (*(u8 *)D_00591BBC) + 2;
    }
    var_a0 = var_v1 & 0xFF & 0xFF;
    if (var_a0 >= 6) {
        var_a0 = 5;
    } else if (var_a0 < 0) {
        var_a0 = 0;
    }
    (*(u8 *)D_00591BBC) = (u8) var_a0;
}
