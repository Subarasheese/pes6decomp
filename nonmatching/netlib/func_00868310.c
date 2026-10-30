/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873EE0(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_00873F60(void *, void *);              /* extern */
M2C_UNK func_008740E0(void *, void *);              /* extern */
M2C_UNK func_00874460(void *);                      /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00868310(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    void *temp_s4;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 0x2102) {
            return -0x46;
        }
        func_00874470();
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 >= 0x201) {
            var_s0 = 2;
        } else if (temp_v0 < 0x81) {
            var_s0 = 0;
        } else {
            var_s0 = 1;
        }
        var_s1 = 0;
loop_15:
        if (var_s1 < var_s0) {
            temp_v1 = *arg1;
            if ((temp_v1 >= 0) && (temp_v1 < 0x80)) {
                temp_s4 = arg1 + (temp_v1 * 0x204);
                func_00873F60(arg0, temp_s4 + 4);
                func_008740E0(arg0, temp_s4 + 8);
                func_00873EE0(arg0, temp_s4 + 9, 0x40);
                func_00873EE0(arg0, temp_s4 + 0x4A, 0x1BB);
                var_s1 += 1;
                *arg1 += 1;
                goto loop_15;
            }
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
