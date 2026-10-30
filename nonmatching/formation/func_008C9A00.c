/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D1CC0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008E7310(s32);                         /* extern */

void func_008C9A00(s32 arg0) {
    func_008E7310(arg0 + 0x28);
    func_008D1CC0(arg0 + 0x480, 1);
}
