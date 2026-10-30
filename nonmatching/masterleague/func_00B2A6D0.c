/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(s32, s32);                      /* extern */

s32 func_00B2A6D0(s32 arg0) {
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u16 temp_v0_2;
    void *temp_v0;

    var_s4 = 0;
    var_s3 = 0;
    do {
        var_s2 = 0;
loop_2:
        temp_v0 = func_00994C60(var_s3 & 0xFF, var_s2 & 0xFF);
        if (temp_v0 != NULL) {
            temp_v0_2 = M2C_FIELD(temp_v0, u16 *, 4);
            if ((temp_v0_2 != 0) && ((arg0 & 0xFFFF) == temp_v0_2)) {
                var_s4 = (var_s4 + 1) & 0xFFFF;
            }
        }
        var_s2 = (var_s2 + 1) & 0xFF;
        if (var_s2 < 0x25) {
            goto loop_2;
        }
        var_s3 = (var_s3 + 1) & 0xFF;
    } while (var_s3 < 0x48);
    return var_s4 & 0xFF;
}
