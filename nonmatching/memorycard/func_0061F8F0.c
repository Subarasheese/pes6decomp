/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E9100(void);
s32 func_008156F0();                                /* extern */
extern char D_0065BE00[];

s32 func_0061F8F0(void) {
    s32 var_s0;

    var_s0 = 1;
    if ((func_002E9100() != 0) && ((*(u8 *)D_0065BE00) == 0)) {
        var_s0 = func_008156F0();
        if (var_s0 == 1) {
            (*(u8 *)D_0065BE00) = 1;
        }
    }
    return var_s0;
}
