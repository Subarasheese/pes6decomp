/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B912A0(M2C_UNK, s64);                /* extern */
M2C_UNK func_00B912F0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B91340(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */

void func_00B92210(s32 arg0, s32 arg1, s64 arg2) {
    func_00B91490(0x19);
    func_00B91340(0x19, arg0 & 0xFF);
    func_00B912F0(0x19, arg1 & 0xFF);
    func_00B912A0(0x19, (s64) (arg2 << 0x30) >> 0x30);
    func_00B91590(0x19, 1);
}
