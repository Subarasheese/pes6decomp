/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

s32 func_00A9E050(s32 arg0, s32 arg1) {
    return ((s32) ((arg1 & 0xFFFF) * 0xB6) / (s32) M2C_FIELD((((arg0 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8)) & 0xFFFF;
}
