/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29BD0();                                /* extern */
extern char D_003AE970[];

s32 func_008F6550(void) {
    s32 var_v0;

    var_v0 = (*(s8 *)D_003AE970) != 8;
    if (var_v0 == 0) {
        var_v0 = func_00B29BD0() == 0;
    }
    return var_v0;
}
