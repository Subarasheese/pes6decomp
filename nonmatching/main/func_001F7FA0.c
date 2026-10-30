/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001F8070(u16);                             /* extern */

s8 *func_001F7FA0(u16 *arg0, s8 *arg1) {
    s32 var_s1;
    s32 var_v1;
    s8 *temp_s2;
    s8 *var_s3;
    s8 temp_v1;
    u16 *var_a0;
    u16 *var_s0;
    u16 temp_v0;

    var_s3 = arg1;
    temp_s2 = var_s3;
    var_s1 = 0;
    var_s0 = arg0;
loop_4:
    var_v1 = 0;
    var_a0 = arg0 + 2;
    if (*arg0 != 0) {
        do {
            temp_v0 = *var_a0;
            var_v1 += 1;
            var_a0 += 2;
        } while (temp_v0 != 0);
    }
    if (var_s1 < var_v1) {
        temp_v1 = func_001F8070(*var_s0) & 0xFFFF;
        if (temp_v1 & 0xFF00) {
            *var_s3 = (s8) (temp_v1 >> 8);
            var_s3 += 1;
        }
        *var_s3 = temp_v1;
        var_s3 += 1;
        var_s0 += 2;
        var_s1 += 1;
        goto loop_4;
    }
    *var_s3 = 0;
    return temp_s2;
}
