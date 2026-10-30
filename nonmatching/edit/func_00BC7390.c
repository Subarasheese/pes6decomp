/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B912F0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */

void func_00BC7390(s32 arg0) {
    func_00B91490(3);
    func_00B912F0(3, arg0 & 0xFF);
}
