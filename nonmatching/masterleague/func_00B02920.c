/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00(s32);                           /* extern */
s32 func_00224D90(s32, s32);                        /* extern */

s32 func_00B02920(s32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    void *temp_v0;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_a0 = func_00224D90(arg0, var_s1) & 0xFFFF;
        if (temp_a0 != 0) {
            temp_v0 = func_00223E00(temp_a0);
            if (temp_v0 == NULL) {
                var_v0 = 0;
            } else if ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) == 3) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            if ((var_v0 & 0xFF) == 1) {
                var_s0 = (var_s0 + 1) & 0xFF;
            }
        }
        var_s1 = (var_s1 + 1) & 0xFF;
    } while (var_s1 < 0x20);
    return var_s0;
}
