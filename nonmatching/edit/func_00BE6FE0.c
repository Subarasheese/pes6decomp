/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B912A0(M2C_UNK, s64);                /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */

void func_00BE6FE0(s64 arg0) {
    func_00B91490(0xC);
    func_00B912A0(0xC, (s64) (arg0 << 0x30) >> 0x30);
}
