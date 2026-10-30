/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C748(s32);                         /* extern */
extern char D_011FCE90[];

s32 func_0018F9E8(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;

    if (M2C_FIELD(((void *)D_011FCE90), s32 *, 0) == 0) {
        return -1;
    }
    temp_v1 = M2C_FIELD(((void *)D_011FCE90), s32 *, 0) - 1;
    M2C_FIELD(((void *)D_011FCE90), s32 *, -0x3170) = temp_v1;
    temp_a0 = M2C_FIELD((((void *)D_011FCE90) + (temp_v1 * 4)), s32 *, 0x90);
    var_v0 = 0xFFFF;
    if (temp_a0 != 0) {
        func_0018C748(temp_a0);
        var_v0 = M2C_FIELD((((void *)D_011FCE90) + (M2C_FIELD(((void *)D_011FCE90), s32 *, -0x3170) * 4)), s32 *, 4);
    }
    return var_v0;
}
