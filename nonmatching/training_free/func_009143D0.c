/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_009143D0(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 >= 0) && (arg1 < 4) && (arg2 >= 0) && (arg2 < 2)) {
        M2C_FIELD(arg0, s32 *, 0x208) = (s32) (M2C_FIELD(arg0, s32 *, 0x208) & ~(1 << arg1));
        M2C_FIELD(arg0, s32 *, 0x208) = (s32) (M2C_FIELD(arg0, s32 *, 0x208) | (arg2 << arg1));
    }
}
