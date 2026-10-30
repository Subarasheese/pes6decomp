/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_01201898[];

s32 func_0019E018(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(((void *)D_01201898), s32 *, 0xC);
    M2C_FIELD(((void *)D_01201898), s32 *, 0x10) = arg1;
    M2C_FIELD(((void *)D_01201898), s32 *, 0xC) = arg0;
    return temp_v0;
}
