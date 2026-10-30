/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00985A10();                            /* extern */
s32 func_00985C70();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
s32 func_009F4200(s32, s32, s32);                   /* extern */
M2C_UNK func_009F49E0(s32);                         /* extern */
s32 func_009F4F70(s32, s32, s32, s32, s32);         /* extern */
s32 func_009F5BB0(s32);                             /* extern */
s32 func_009F9BD0(s32);                             /* extern */
s32 func_009F9C20(s32);                             /* extern */

s32 func_009E9390(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    if (arg1 <= 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0xC);
        temp_s2 = M2C_FIELD(arg0, s32 *, 8);
        temp_s3 = func_009F9BD0(M2C_FIELD(arg0, s32 *, 4)) & 0xFF;
        temp_s4 = func_009F9C20(M2C_FIELD(arg0, s32 *, 0)) & 0xFF;
        temp_v0 = func_00985C70();
        var_v0 = 0;
        if (temp_v0 != 0) {
            func_00985A10();
            func_009F49E0(temp_v0);
            var_v0 = func_009F4F70(temp_v0, temp_s4, temp_s3, temp_s2, temp_s1);
        }
    } else {
        temp_s0 = func_009F5BB0(M2C_FIELD(arg0, s32 *, 0)) & 0xFF;
        temp_v0_2 = func_00985C70();
        var_v0 = 0;
        if (temp_v0_2 != 0) {
            func_00985A10();
            func_009F49E0(temp_v0_2);
            var_v0 = func_009F4200(temp_v0_2, temp_s0 & 0xFF, arg1 - 1);
        }
    }
    if (var_v0 == 0) {
        return 0;
    }
    func_0099D030(1);
    return 1;
}
