/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
s32 func_00970870(s32);                             /* extern */
s32 func_00B05280(s32);                             /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B25340(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v1;
    u16 var_s1;
    u16 var_s2;
    void *temp_v0;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        if (func_00970870(arg0) != 0) {
            temp_v0_2 = func_00B275D0(7);
            switch (temp_v0_2) {                    /* irregular */
            case 5:
            case 4:
                if (M2C_FIELD(temp_v0, u16 *, 0xEA) != 0) {
                    var_s1 = M2C_FIELD(temp_v0, u16 *, 0xE4);
                    var_s2 = M2C_FIELD(temp_v0, u16 *, 0xE6);
                    temp_a0 = func_00B05280(arg0) & 0xFFFF;
                    if (M2C_FIELD(temp_v0, u16 *, 0xE8) != 0) {
                        var_s2 = (var_s2 + 0xA) & 0xFFFF;
                        if ((var_s1 & 0xFFFF) >= 0xB) {
                            var_s1 = (var_s1 - 0xA) & 0xFFFF;
                        } else {
                            var_s1 = 0;
                        }
                    }
                    temp_v1 = temp_a0 & 0xFFFF;
                    if ((var_s2 & 0xFFFF) < temp_v1) {
                        return 0;
                    }
                    if (temp_v1 < (var_s1 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_22;
                }
            case 2:
block_22:
                return 1;
            default:
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
