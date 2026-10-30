/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s32 func_00825610();                                /* extern */
extern char D_00591BBA[];

s32 func_002F7920(void) {
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = (*(u8 *)D_00591BBA) != 0;
    if (var_v0 != 0) {
        if (func_002DCA30() == 0) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = func_00825610();
        }
        var_v0 = var_v0_2 == 0;
    }
    return var_v0;
}
