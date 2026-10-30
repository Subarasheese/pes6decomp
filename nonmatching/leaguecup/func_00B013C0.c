/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAD54;

u16 func_00B013C0(s32 arg0) {
    if (D_003EAD54 != 0) {
        return M2C_FIELD((((arg0 & 0xFFFF) * 0x1C) + D_003EAD54), u16 *, 0xA0C);
    }
    return 0U;
}
