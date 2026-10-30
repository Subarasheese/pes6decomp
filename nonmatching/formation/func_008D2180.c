/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008C5750(s32, s32);                    /* extern */

void func_008D2180(s32 arg0, s32 arg1) {
    if (arg1 < 0) {
        func_008C5750(arg0 + 0x214, 0);
        return;
    }
    func_008C5750(arg0 + 0x214, func_001F08B0(arg1));
}
