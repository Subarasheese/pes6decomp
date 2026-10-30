/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00224520(s32, s32);                      /* extern */
u16 *func_00224E20(s32, s32);                       /* extern */

u8 func_0094C7F0(s32 arg0, s32 arg1) {
    s32 var_s1;
    u16 *temp_v0;
    u8 var_v0;
    void *temp_v0_2;

    var_s1 = 0;
loop_1:
    temp_v0 = func_00224E20(arg1, var_s1 & 0xFF);
    if ((temp_v0 != NULL) && ((arg0 & 0xFFFF) == *temp_v0)) {
        temp_v0_2 = func_00224520(arg1, var_s1 & 0xFF);
        if (temp_v0_2 != NULL) {
            var_v0 = M2C_FIELD(temp_v0_2, u8 *, 2);
        } else {
            var_v0 = 0;
        }
        return var_v0;
    }
    var_s1 += 1;
    if (var_s1 >= 0x20) {
        return 0U;
    }
    goto loop_1;
}
