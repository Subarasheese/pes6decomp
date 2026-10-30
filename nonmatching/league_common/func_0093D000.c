/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093D040(s32, s32);
extern s32 D_003E77B4;

s32 func_0093D000(s32 arg0) {
    return (func_0093D040(arg0, (s32) M2C_FIELD((((arg0 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4AB6)) & 0xFF) > 0;
}
