/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD890[];
extern char D_00CBD894[];

s32 func_00C01090(s32 arg0) {
    s32 var_v0;
    s32 var_v1;

    if (arg0 >= 0x2E) {
        return 0;
    }
    if (arg0 >= 0x20) {
        var_v1 = 1 << (arg0 - 0x20);
        var_v0 = (*(s32 *)D_00CBD894);
    } else {
        var_v0 = (*(s32 *)D_00CBD890);
        var_v1 = 1 << arg0;
    }
    return var_v0 & var_v1;
}
