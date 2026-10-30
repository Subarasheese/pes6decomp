/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C80[];

u8 func_008FA8E0(s32 arg0, s32 arg1) {
    if (M2C_FIELD(((void *)D_00921C80), s32 *, 4) != 0) {
        return M2C_FIELD((((arg1 & 0xFF) * 0xC) + M2C_FIELD((((arg0 & 0xFF) * 8) + M2C_FIELD(((void *)D_00921C80), s32 *, 0)), s32 *, 4)), u8 *, 1);
    }
    return 0U;
}
