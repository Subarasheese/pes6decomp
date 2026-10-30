/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B9890(s32);                             /* extern */
M2C_UNK func_002F3CB0(s32, s32, s32);               /* extern */

s32 func_0095F710(s32 arg0, s32 arg1, s32 arg2) {
    func_002F3CB0(arg0, arg2 & 0xFF, func_001B9890(arg1 & 0xFF));
    return arg0;
}
