/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
s32 func_00B02A20(s32);                             /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B265F0(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v1;
    u8 var_s1;
    u8 var_s2;
    void *temp_v0;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00B275D0(3);
        switch (temp_v0_2) {                        /* irregular */
        case 5:
        case 4:
            if (M2C_FIELD(temp_v0, u8 *, 0x53) != 0) {
                var_s1 = M2C_FIELD(temp_v0, u8 *, 0x50);
                var_s2 = M2C_FIELD(temp_v0, u8 *, 0x51);
                if (M2C_FIELD(temp_v0, u8 *, 0x52) != 0) {
                    var_s2 = (var_s2 + 5) & 0xFF;
                    if ((var_s1 & 0xFF) >= 6) {
                        var_s1 = (var_s1 - 5) & 0xFF;
                    } else {
                        var_s1 = 0;
                    }
                }
                temp_v1 = ((func_00B02A20(arg0) & 0xFF) - 0xF) & 0xFF;
                if ((var_s2 & 0xFF) < temp_v1) {
                    return 0;
                }
                if (temp_v1 < (var_s1 & 0xFF)) {
                    return 0;
                }
                goto block_18;
            }
        case 2:
block_18:
            return 1;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
