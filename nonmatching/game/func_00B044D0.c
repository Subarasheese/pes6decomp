/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 D_003E74CC;

s32 func_00B044D0(s32 arg0, s32 arg1) {
    return ((s32) (M2C_FIELD(func_00208310(arg0 & 0xFFFF), u16 *, 8) * ((arg1 & 0xFFFF) * 0xB6) * 2) / (s32) M2C_FIELD((((arg0 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8)) & 0xFFFF;
}
