/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D1CC0(s32, M2C_UNK);                /* extern */
s32 func_008D1E40(s32);                             /* extern */
s32 func_008E7560(s32, s32);                        /* extern */

void func_008C9A40(s32 arg0) {
    if (func_008E7560(arg0 + 0x28, func_008D1E40(arg0 + 0x480)) != 0) {
        func_008D1CC0(arg0 + 0x480, 0);
    }
}
