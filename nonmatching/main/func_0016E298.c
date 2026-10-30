/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(s32, M2C_UNK *, s32, s32);    /* extern */
extern char D_00385934[];
extern char D_003CA458[];

void func_0016E298(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a1;
    s32 var_a3;
    s8 *temp_v1;

    var_a3 = arg3;
    var_a1 = 0;
    if (arg2 > 0) {
        var_a3 = -0x56;
        do {
            temp_v1 = arg1 + var_a1;
            var_a1 += 1;
            *temp_v1 = -0x56;
        } while (var_a1 < arg2);
    }
    sprintf(arg1, ((void *)D_003CA458), (*(s32 *)D_00385934), var_a3);
    (*(s32 *)D_00385934) += 1;
}
