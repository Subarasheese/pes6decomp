/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E47D0(u8);                          /* extern */
extern void *D_00A7DF08;

u8 func_009E45B0(s32 arg0) {
    if (D_00A7DF08 != NULL) {
        M2C_FIELD(D_00A7DF08, s32 *, 0x120) = arg0;
        func_009E47D0(M2C_FIELD(D_00A7DF08, u8 *, 0x11C));
        return M2C_FIELD(D_00A7DF08, u8 *, 0x11C);
    }
    return 0U;
}
