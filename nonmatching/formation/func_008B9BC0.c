/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DB600(s32, s32);                    /* extern */
M2C_UNK func_002DBF40();                            /* extern */

void func_008B9BC0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_002DBF40();
    if (arg3 != 0) {
        func_002DB600(arg0, arg3);
    }
}
