/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B36B8[];

s32 func_0011DEF8(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x390) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x38C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x388) = arg2;
    return M2C_FIELD(arg0, s32 (**)(void *, M2C_UNK *), 0x398)(arg0, ((void *)D_005B36B8));
}
