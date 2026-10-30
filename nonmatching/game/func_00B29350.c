/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00591CB4[];

s32 func_00B29350(void) {
    s32 var_v0;

    var_v0 = 0;
    if (((*(u8 *)D_00591C09) == 5) && ((*(s32 *)D_00591CB4) == 1)) {
        var_v0 = 1;
    }
    return var_v0;
}
