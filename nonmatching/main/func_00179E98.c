/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00396E18[];
extern char D_00396E38[];
extern char D_00510D20[];

s32 func_00179E98(s32 arg0) {
    s32 (*temp_v0)(s32);
    s32 *temp_a0_2;
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s3;
    void *var_s0;

    temp_s4 = arg0 * 4;
    temp_s1 = ((void *)D_00396E38) + temp_s4;
    var_s2 = 5;
    var_s3 = 0;
    var_s0 = ((void *)D_00510D20) + (arg0 * 0x48);
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 (**)(s32), 0);
        temp_a0 = M2C_FIELD(var_s0, s32 *, 4);
        var_s0 += 0xC;
        if (temp_v0 != NULL) {
            *temp_s1 = 1;
            temp_v0_2 = temp_v0(temp_a0);
            *temp_s1 = 0;
            var_s3 |= temp_v0_2;
        }
        var_s2 -= 1;
    } while (var_s2 >= 0);
    temp_a0_2 = ((void *)D_00396E18) + temp_s4;
    *temp_a0_2 += 1;
    return var_s3;
}
