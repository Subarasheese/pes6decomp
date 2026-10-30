/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEDC4[];

s32 func_00197F98(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    if (arg1 >= 0) {
        if (arg2 < 0) {
            return -0xC;
        }
        temp_v1 = (arg0 * 0x38) + (*(s32 *)D_011FEDC4);
        M2C_FIELD(temp_v1, s32 *, 0x1C) = arg2;
        M2C_FIELD(temp_v1, s32 *, 0x18) = arg1;
        M2C_FIELD(temp_v1, s32 *, 0x14) = 0;
        return 0;
    }
    return -0xB;
}
