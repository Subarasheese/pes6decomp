/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA37C;
extern char D_008B23E8[];

s32 func_0087B470(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_003EA37C != 0) {
        var_v0 = (*(s32 *)D_008B23E8);
    }
    return var_v0;
}
