/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern s32 D_003E77B0;

s32 func_00931C80(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFF;
    var_v0 = temp_v1 & 7;
    if ((temp_v1 < 0) && (var_v0 != 0)) {
        var_v0 -= 8;
    }
    if (func_0022F150() != NULL) {
        return (M2C_FIELD(((((s32) ((u32) (arg0 & 0xFF) >> 3) % 8) & 0xFF & 0xFF) + D_003E77B0), u8 *, 0x1546) & (1 << (var_v0 & 0xFF & 0xFF))) == 0;
    }
    return 0;
}
