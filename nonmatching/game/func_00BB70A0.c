/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002871C0(void *);
s32 func_00BB70A0(void) {
    f32 sp10;
    s32 var_v0;

    func_002871C0(&sp10);
    var_v0 = 1;
    if ((sp10 <= 13465.0f) && !(sp10 < -13465.0f)) {
        var_v0 = 0;
    }
    return var_v0;
}
