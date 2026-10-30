/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */
s32 func_00960A30(s32);                             /* extern */

s32 func_00960C70(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    void *var_v0_2;

    var_s0 = 0;
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F6C0;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        var_s1 = 0;
        do {
            temp_v0_2 = func_00936B90();
            if (temp_v0_2 != 0) {
                var_v1 = temp_v0_2 + 0x3F6C0;
            } else {
                var_v1 = 0;
            }
            if (var_v1 == 0) {
                var_v0_2 = NULL;
            } else if (var_s1 < 0) {
                var_v0_2 = NULL;
            } else if (var_s1 < 0xA) {
                var_v0_2 = var_v1 + (var_s1 * 0x44) + 0xC;
            } else {
                var_v0_2 = NULL;
            }
            if (var_v0_2 != NULL) {
                var_v0_3 = M2C_FIELD(var_v0_2, s32 *, 0xC);
            } else {
                var_v0_3 = 0;
            }
            if ((var_v0_3 != 0) == 1) {
                temp_v0_3 = func_00960A30(var_s1);
                if (temp_v0_3 != 2) {
                    switch (temp_v0_3) {            /* irregular */
                    case 1:
                        var_s0 += 1;
                        break;
                    case 0:
                        var_s0 += 3;
                        break;
                    }
                }
            }
            var_s1 += 1;
        } while (var_s1 < 0xA);
        return var_s0;
    }
    return 0;
}
