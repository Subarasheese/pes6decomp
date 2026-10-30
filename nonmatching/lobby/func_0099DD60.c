/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0099DDA0(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0099DD60(s32 arg0) {
    s32 sp1C;

    sp1C = func_001F08B0(arg0);
    func_0099DDA0(&sp1C, 1, 0, 0);
}
