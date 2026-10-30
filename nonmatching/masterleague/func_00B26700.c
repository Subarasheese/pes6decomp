/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
void *func_00970870(s32);                           /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B26700(s32 arg0) {
    s32 temp_v0_3;
    s32 temp_v1;
    u8 var_a0;
    u8 var_a1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00970870(arg0);
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_00B275D0(2);
            switch (temp_v0_3) {                    /* irregular */
            case 5:
            case 4:
                if (M2C_FIELD(temp_v0, u8 *, 0x4B) != 0) {
                    var_a0 = M2C_FIELD(temp_v0, u8 *, 0x48);
                    var_a1 = M2C_FIELD(temp_v0, u8 *, 0x49);
                    if (M2C_FIELD(temp_v0, u8 *, 0x4A) != 0) {
                        var_a1 = (var_a1 + 5) & 0xFF;
                        if ((var_a0 & 0xFF) >= 6) {
                            var_a0 = (var_a0 - 5) & 0xFF;
                        } else {
                            var_a0 = 0;
                        }
                    }
                    temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 0x24) & 0x3F;
                    if ((var_a1 & 0xFF) < temp_v1) {
                        return 0;
                    }
                    if (temp_v1 < (var_a0 & 0xFF)) {
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
