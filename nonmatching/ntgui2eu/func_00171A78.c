/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00173858(void *);
M2C_UNK func_00173078(void *);                      /* extern */
M2C_UNK func_00173B00(void *);                      /* extern */
M2C_UNK func_00174030(void *);                      /* extern */

s32 func_00171A78(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = 0;
        if (M2C_FIELD(arg0, s32 *, 0xD0C) != 0) {
            func_00174030(arg0);
            func_00173B00(arg0);
            M2C_FIELD(arg0, s32 *, 0x98) = 2;
            func_00173858(arg0);
            func_00173078(arg0);
            var_v0 = 1;
        }
    }
    return var_v0;
}
