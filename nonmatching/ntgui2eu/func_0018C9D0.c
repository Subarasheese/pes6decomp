/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018C6D8();                                /* extern */
extern char D_005C8D68[];

void func_0018C9D0(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 var_a3;
    void *temp_a0;

    if (M2C_FIELD(((void *)D_005C8D68), s32 *, 0) == 1) {
        if (func_0018C6D8() == 0) {
            var_a3 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x28);
        } else {
            var_a3 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x28) == 0;
        }
    } else {
        var_a3 = 0;
    }
    temp_a0 = ((void *)D_005C8D68) - 0x7298;
    *arg0 = (M2C_FIELD(temp_a0, s32 *, 0x20) - ((s32) M2C_FIELD(temp_a0, s32 *, 0x18) >> 1)) * 0x10;
    *arg1 = ((M2C_FIELD(temp_a0, s32 *, 0x24) - ((s32) M2C_FIELD(temp_a0, s32 *, 0x1C) >> 1)) * 0x10) + (var_a3 * 8);
    *arg2 = var_a3;
    M2C_FIELD(temp_a0, s32 *, 0x2C) = 1;
}
