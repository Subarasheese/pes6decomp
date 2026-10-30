/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C8D68[];

void func_0018CA98(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 var_a4;

    var_a4 = 0;
    if (M2C_FIELD(((void *)D_005C8D68), s32 *, 0) == 1) {
        var_a4 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x28);
    }
    *arg0 = (M2C_FIELD(((void *)D_005C8D68), s32 *, 0x20) - ((s32) M2C_FIELD(((void *)D_005C8D68), s32 *, 0x18) >> 1)) * 0x10;
    *arg1 = ((M2C_FIELD(((void *)D_005C8D68), s32 *, 0x24) - ((s32) M2C_FIELD(((void *)D_005C8D68), s32 *, 0x1C) >> 1)) * 0x10) + (var_a4 * 8);
    *arg2 = var_a4;
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x2C) = 0;
}
