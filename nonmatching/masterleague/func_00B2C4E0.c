/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_002282E0(void *, s32);                     /* extern */
void *func_00970870(s32);                           /* extern */

s32 func_00B2C4E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    void *temp_v0;

    var_s3 = 0;
    var_s2 = 0;
    temp_s1 = arg1 & 0xFF;
    do {
        temp_a0 = func_00224BC0(arg0, var_s3 & 0xFF) & 0xFFFF;
        if (temp_a0 != 0) {
            temp_v0 = func_00970870(temp_a0);
            if (temp_v0 != NULL) {
                if (temp_s1 == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C)) {
                    var_v0 = var_s2 + 1;
                    goto block_8;
                }
                if (((arg2 & 0xFF) == 1) && (func_002282E0(temp_v0, temp_s1) != 0)) {
                    var_v0 = var_s2 + 1;
block_8:
                    var_s2 = var_v0 & 0xFF;
                }
            }
        }
        var_s3 += 1;
    } while (var_s3 < 0x20);
    return var_s2;
}
