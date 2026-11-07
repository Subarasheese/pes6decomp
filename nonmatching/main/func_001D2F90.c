/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00140F40(s32, f32 *, M2C_UNK);             /* extern */
M2C_UNK func_001D4C20(s32, s32, f32 *);             /* extern */

void func_001D2F90(s32 arg0, void **arg1, s32 arg2, f32 *arg3) {
    f32 spA0;
    f32 spA4;
    f32 spA8;
    s32 spAC;
    f32 *temp_s6;
    f32 *var_s2;
    f32 temp_f0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s3;
    void **var_s4;
    void *temp_v0;

    var_s3 = arg2;
    var_s2 = arg3;
    var_s4 = arg1;
    temp_s0 = var_s3;
    temp_s6 = var_s2;
    spAC = 0x3F800000;
    var_s1 = 0;
    if (arg0 > 0) {
        do {
            temp_v0 = *var_s4;
            spA0 = M2C_FIELD(temp_v0, f32 *, 0);
            spA4 = M2C_FIELD(temp_v0, f32 *, 4);
            spA8 = M2C_FIELD(temp_v0, f32 *, 8);
            temp_f0 = func_00140F40(var_s3, &spA0, 1);
            var_s1 += 1;
            var_s3 += 0x10;
            *var_s2 = temp_f0;
            var_s2 += 4;
            var_s4 += 4;
        } while (var_s1 < arg0);
    }
    func_001D4C20(arg0, temp_s0, temp_s6);
}
