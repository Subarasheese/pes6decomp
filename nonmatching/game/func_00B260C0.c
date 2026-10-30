/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE84[];

s32 func_00B260C0(void) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = (*(s32 *)D_00CBBE84);
    var_v1 = var_v0 >= 0;
    if (var_v1 != 0) {
        var_v1 = var_v0 < 0x17;
    }
    if (var_v1 == 0) {
        var_v0 = 0xFF;
    }
    return var_v0;
}
