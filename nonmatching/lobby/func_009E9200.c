/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
M2C_UNK func_00985A10();                            /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009F49E0(s32);                         /* extern */
s32 func_009F4D30(s32, s32, s32, s32);              /* extern */
s32 func_009F4E70(s32, s32, s32);                   /* extern */
s32 func_009F81A0(s32);                             /* extern */
s32 func_009F8B60(s32);                             /* extern */

s32 func_009E9200(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    if (arg1 <= 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0xC);
        temp_s2 = M2C_FIELD(arg0, s32 *, 8);
        temp_s3 = func_009F81A0(M2C_FIELD(arg0, s32 *, 0));
        temp_v0 = func_00985C70();
        var_v0 = 0;
        if (temp_v0 != 0) {
            func_00985A10();
            func_009F49E0(temp_v0);
            var_v0 = func_009F4D30(temp_v0, temp_s3, temp_s2, temp_s1);
        }
    } else {
        temp_s1_2 = func_009F8B60(M2C_FIELD(arg0, s32 *, 0));
        temp_v0_2 = func_00985C70();
        var_v0 = 0;
        if (temp_v0_2 != 0) {
            func_00985A10();
            func_009F49E0(temp_v0_2);
            var_v0 = func_009F4E70(temp_v0_2, temp_s1_2, arg1 - 1);
        }
    }
    if (var_v0 == 0) {
        return 0;
    }
    func_0099D030(1);
    return 1;
}
