/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00826010(s32, M2C_UNK);                /* extern */

s32 func_00825820(void) {
    if (func_001F08B0(0x01FA0008) != 0) {
        func_00826010(func_001F08B0(0x01FA0008), 0);
    }
    return 1;
}
