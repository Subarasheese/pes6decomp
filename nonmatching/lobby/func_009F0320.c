/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E4400(s32, s32);                    /* extern */
s32 func_009BF3D0(s32, s32, s32);                   /* extern */

void func_009F0320(void *arg0, s32 arg1, s32 *arg2, void *arg3, s32 arg4) {
    s32 *var_s2;
    s32 temp_s0;
    s32 var_s4;
    s32 var_s5;
    void *var_s1;
    void *var_s3;

    if ((arg4 != 0) && (arg3 != NULL) && (arg0 != NULL)) {
        var_s5 = 0;
        if (arg1 > 0) {
            var_s3 = arg3;
            var_s2 = arg2;
            var_s1 = arg0;
            do {
                var_s4 = M2C_FIELD(var_s3, s32 *, 0);
                temp_s0 = *var_s2;
                if (var_s4 != 0) {
                    func_002E4400(var_s4, temp_s0 & 0xFF);
                } else if (temp_s0 == 1) {
                    var_s4 = func_009BF3D0(M2C_FIELD(var_s1, s32 *, 0), arg4, M2C_FIELD(var_s1, s32 *, 4));
                }
                M2C_FIELD(var_s3, s32 *, 0) = var_s4;
                var_s5 += 1;
                M2C_FIELD(var_s3, s32 *, 4) = temp_s0;
                var_s2 += 4;
                var_s3 += 8;
                var_s1 += 8;
            } while (var_s5 < arg1);
        }
    }
}
