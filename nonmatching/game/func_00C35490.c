/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB650[];
extern char D_00CCB660[];

s32 func_00C35490(void) {
    s32 var_v0;

    var_v0 = (*(u8 *)D_00CCB660) != 0;
    if (var_v0 != 0) {
        var_v0 = (*(s32 *)D_00CCB650) == 0xB7;
    }
    return var_v0;
}
