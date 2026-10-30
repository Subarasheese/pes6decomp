/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B912A0(M2C_UNK, s64);                /* extern */
M2C_UNK func_00B912F0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */

void func_00B91890(s64 arg0, s32 arg1) {
    func_00B91490(0x1F);
    func_00B912A0(0x1F, (s64) (arg0 << 0x30) >> 0x30);
    func_00B912F0(0x1F, arg1 & 0xFF);
}
