/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002374D0(void);
extern u32 func_0017A670(s32);
extern s32 func_002371A0(s32);
s32 func_00C1B460(M2C_UNK);                         /* extern */

s32 func_00BA5D20(void) {
    s32 var_v0;

    if (func_0017A670(0) == 6) {
        var_v0 = func_00C1B460(0) & 0xFFFF;
        goto block_9;
    }
    if (func_002374D0() == 0) {
        var_v0 = func_002371A0(0x126) & 0xFFFF;
block_9:
        return var_v0 + 0x33;
    }
    return 0xFF;
}
