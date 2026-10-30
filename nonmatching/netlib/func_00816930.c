/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00309440(s32);
M2C_UNK func_00309460(s32, s32);                    /* extern */
s32 func_0085AB00();                                /* extern */

s32 func_00816930(s32 arg0) {
    if (func_0085AB00() != 0) {
        func_00309460(arg0, func_00309440(arg0) + 1);
    }
    return 0;
}
