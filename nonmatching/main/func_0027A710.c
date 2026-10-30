/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0059FBDC[];

void func_0027A710(u32 arg0) {
    u32 var_a0;

    var_a0 = arg0;
    if (var_a0 >= 0x11U) {
        var_a0 = 0x10;
    } else if ((var_a0 != 0) && (var_a0 < 4U)) {
        var_a0 = 4;
    }
    (*(u32 *)D_0059FBDC) = var_a0;
}
