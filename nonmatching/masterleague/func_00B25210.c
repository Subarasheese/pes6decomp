/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
void *func_0093B550(s32);                           /* extern */
s32 func_00970870(s32);                             /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B25210(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v1;
    u8 var_s1;
    u8 var_s2;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        if (func_00970870(arg0) != 0) {
            temp_v0_2 = func_00B275D0(8);
            switch (temp_v0_2) {                    /* irregular */
            case 5:
            case 4:
                if (M2C_FIELD(temp_v0, u8 *, 0xF3) != 0) {
                    var_s1 = M2C_FIELD(temp_v0, u8 *, 0xF0);
                    var_s2 = M2C_FIELD(temp_v0, u8 *, 0xF1);
                    temp_v0_3 = func_0093B550(arg0);
                    if (temp_v0_3 != NULL) {
                        if (M2C_FIELD(temp_v0, u8 *, 0xF2) != 0) {
                            var_s2 = (var_s2 + 1) & 0xFF;
                            if ((var_s1 & 0xFF) >= 2) {
                                var_s1 = (var_s1 - 1) & 0xFF;
                            } else {
                                var_s1 = 0;
                            }
                        }
                        temp_v1 = ((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x38) >> 0x3A) & 0xFF & 0xFF;
                        if ((var_s2 & 0xFF) < temp_v1) {
                            return 0;
                        }
                        if (temp_v1 < (var_s1 & 0xFF)) {
                            return 0;
                        }
                        goto block_26;
                    }
                    return 0;
                }
            case 2:
block_26:
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
