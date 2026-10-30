/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32 *);                       /* extern */
s32 *func_00154060(M2C_UNK, s32);                   /* extern */
s32 func_001BB730();                                /* extern */

s32 *func_001BA6F0(s32 arg0) {
    s32 *temp_s2;
    s32 *temp_s3;
    s32 *var_s0;
    s32 *var_s4;
    s32 var_s1;

    var_s4 = func_00154060(1, 0x10);
    if (var_s4 != NULL) {
        temp_s3 = func_00154060(1, arg0 * 4);
        temp_s2 = func_00154060(1, arg0 * 2);
        if ((temp_s3 != NULL) && (temp_s2 != NULL)) {
            var_s1 = 0;
            if (arg0 > 0) {
                var_s0 = temp_s3;
                do {
                    *var_s0 = func_001BB730();
                    var_s1 += 1;
                    var_s0 += 4;
                } while (var_s1 < arg0);
            }
            M2C_FIELD(var_s4, s32 **, 4) = temp_s3;
            M2C_FIELD(var_s4, s32 **, 8) = temp_s2;
            M2C_FIELD(var_s4, s32 *, 0xC) = 0;
            M2C_FIELD(var_s4, s32 *, 0) = arg0;
        } else {
            func_00153FA0(temp_s2);
            func_00153FA0(temp_s3);
            func_00153FA0(var_s4);
            var_s4 = NULL;
        }
    }
    return var_s4;
}
