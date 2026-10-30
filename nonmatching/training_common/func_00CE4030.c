/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 *func_00154060(M2C_UNK, s32);                   /* extern */
M2C_UNK func_001C4730(s32 *, s32 *, s32);           /* extern */
M2C_UNK func_001D7840(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, s32);                    /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7E40(s32, s32);                    /* extern */
s32 func_001D7F90(s32);                             /* extern */

void func_00CE4030(s32 arg0, void *arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 *temp_v0;
    s32 *var_s1;
    s32 *var_s3;
    s32 temp_v0_2;
    s32 var_s2;

    var_s3 = arg3;
    if (arg2 <= 0) {
        var_s1 = NULL;
    } else {
        var_s1 = func_00154060(4, arg2);
        temp_v0 = func_00154060(4, arg2);
        M2C_FIELD(arg1, s32 **, 4) = temp_v0;
        func_001C4730(temp_v0, var_s3, arg2 * 4);
        M2C_FIELD(arg1, s32 **, 0) = var_s1;
        M2C_FIELD(arg1, s32 *, 8) = arg2;
    }
    var_s2 = 0;
    if (arg2 > 0) {
        do {
            temp_v0_2 = func_001D7F90(arg0);
            *var_s1 = temp_v0_2;
            func_001D7E40(temp_v0_2, *var_s3);
            func_001D7D80(*var_s1, 0);
            func_001D7C20(*var_s1, 0);
            func_001D7D60(*var_s1, arg4 & 0xFF);
            func_001D7840(*var_s1, 0);
            var_s2 += 1;
            var_s1 += 4;
            var_s3 += 4;
        } while (var_s2 < arg2);
    }
}
