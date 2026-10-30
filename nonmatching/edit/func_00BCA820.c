/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A5F20(s32);
M2C_UNK func_001A5BE0(s32);                         /* extern */

void func_00BCA820(s32 arg0) {
    if ((arg0 < 0xB) && (func_001A5F20(arg0) != 0)) {
        func_001A5BE0(arg0);
    }
}
