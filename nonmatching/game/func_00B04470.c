/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
s32 func_00B04470(s32 arg0, s32 arg1, s32 arg2) {
    return ((s32) (M2C_FIELD(func_00208310(arg0 & 0xFFFF), u16 *, 8) * ((arg2 & 0xFFFF) * 0xB6) * 2) / arg1) & 0xFFFF;
}
