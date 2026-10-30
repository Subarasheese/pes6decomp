/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_009C3E90(s32, s32);                    /* extern */

void func_009C2DD0(s32 arg0, s32 arg1) {
    func_009C3E90(arg0, func_001F08B0(arg1));
}
