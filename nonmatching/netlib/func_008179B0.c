/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7A60(s32);
M2C_UNK func_001B7BC0();                            /* extern */

s32 func_008179B0(M2C_UNK arg0, s32 arg1) {
    func_001B7BC0();
    if (arg1 != 0) {
        func_001B7A60(1);
    }
    return 1;
}
