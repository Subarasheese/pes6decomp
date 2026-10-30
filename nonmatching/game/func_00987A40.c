/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00987210(s32, M2C_UNK);                /* extern */

void func_00987A40(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        func_00987210(arg1 + 0x80, 1);
        return;
    }
    func_00987210(arg1 + 0x80, 4);
}
