/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAD44;

u16 func_00AEEE00(s32 arg0, s32 arg1) {
    if (D_003EAD44 != 0) {
        return M2C_FIELD((((arg1 & 0xFF) * 4) + (((arg0 & 0xFF) * 0x4A4) + D_003EAD44)), u16 *, 8);
    }
    return 0xFFFFU;
}
