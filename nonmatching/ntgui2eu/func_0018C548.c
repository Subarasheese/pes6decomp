/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C7D58[];

s32 func_0018C548(s32 arg0) {
    s32 temp_v1;

    if (M2C_FIELD(((void *)D_005C7D58), s32 *, 0) >= 0x400) {
        return -1;
    }
    temp_v1 = M2C_FIELD(((void *)D_005C7D58), s32 *, 0) + 1;
    M2C_FIELD((((void *)D_005C7D58) + (M2C_FIELD(((void *)D_005C7D58), s32 *, 0) * 4)), s32 *, 4) = arg0;
    M2C_FIELD(((void *)D_005C7D58), s32 *, 0x7D58) = temp_v1;
    return 0x400 - temp_v1;
}
