/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DC210(void);
M2C_UNK func_002DB600(s32, s32);                    /* extern */

s32 func_008B9C10(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_002DC210();
    func_002DB600(temp_v0, arg0);
    return temp_v0;
}
