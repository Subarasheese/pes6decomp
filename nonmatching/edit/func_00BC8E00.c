/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE5180[];

void func_00BC8E00(s32 arg0) {
    s32 var_a0;

    if (arg0 == 0) {
        var_a0 = (*(s32 *)D_00CE5180) + 0x200;
    } else {
        var_a0 = (*(s32 *)D_00CE5180) - 0x200;
    }
    (*(s32 *)D_00CE5180) = var_a0;
}
