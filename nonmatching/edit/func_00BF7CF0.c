/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B912F0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */

void func_00BF7CF0(s32 arg0) {
    func_00B91490(0x1E);
    func_00B912F0(0x1E, arg0 & 0xFF);
}
