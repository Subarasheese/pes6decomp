/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEDC4[];

s32 func_00198880(s32 arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)D_011FEDC4) + (arg0 * 0x38) + 0x10;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x20) = 0;
    return 0;
}
