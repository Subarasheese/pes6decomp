/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E08B0(u8);                          /* extern */
extern void *D_00A7DEE8;

s32 func_009E0A20(s8 arg0) {
    if (D_00A7DEE8 != NULL) {
        M2C_FIELD(D_00A7DEE8, s8 *, 0x3B) = arg0;
        func_009E08B0(M2C_FIELD(D_00A7DEE8, u8 *, 0x3C));
        return 1;
    }
    return 0;
}
