/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00C12A40(u32);                             /* extern */
void *func_00C13280(u32);                           /* extern */
s32 func_00C132B0(u32);                             /* extern */
s32 func_00C132C0();                                /* extern */
u32 func_00C137B0(u32);                             /* extern */
u32 func_00C13840();                                /* extern */

u32 func_002C6060(u32 arg0) {
    s32 temp_s0_2;
    u32 temp_s1;
    u32 var_s2;
    u32 var_s3;
    u8 temp_s0;

    var_s3 = arg0;
    var_s2 = -1U;
    if ((var_s3 != -1U) && ((func_00C132C0() & 0xFF) == 3)) {
        temp_s0 = M2C_FIELD(func_00C13280(var_s3), u8 *, 5);
        temp_s1 = func_00C13840();
        temp_s0_2 = temp_s0 & 0xFF;
        if ((temp_s0_2 != 0xFF) && (temp_s1 < var_s3)) {
loop_4:
            var_s3 = func_00C137B0(var_s3);
            if (func_00C12A40(var_s3) == 0) {
                if (temp_s0_2 == (func_00C132B0(var_s3) & 0xFF)) {
                    var_s2 = var_s3;
                } else if (temp_s1 < var_s3) {
                    goto loop_4;
                }
            }
        }
    }
    return var_s2;
}
