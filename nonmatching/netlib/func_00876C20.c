/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00876C20(s32 *arg0, void *arg1, s32 *arg2) {
    s32 var_s0;
    void *temp_s4;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        if (*arg0 != 0x8123) {
            return -0x46;
        }
        func_00874470();
        var_s0 = 0;
loop_8:
        if (var_s0 < (s32) M2C_FIELD(arg1, u16 *, 0x10)) {
            temp_s4 = arg1 + (var_s0 * 0x30) + 0x8E;
            func_00874040(arg0, temp_s4 + 0x20);
            func_00873EE0(arg0, temp_s4, 0x1C);
            func_00874040(arg0, temp_s4 + 0x22);
            var_s0 += 1;
            goto loop_8;
        }
        func_00874460(arg0);
        *arg2 = 0;
        return 0;
    }
    return -0x18;
}
