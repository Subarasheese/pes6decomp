/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B09E0[];

s32 func_00843F70(s64 arg0) {
    s16 *var_a1;
    s32 var_a0;
    s64 temp_v1;

    temp_v1 = (s64) (arg0 << 0x30) >> 0x30;
    if (temp_v1 != -9) {
        var_a0 = 0;
        var_a1 = ((void *)D_008B09E0);
loop_2:
        if (*var_a1 != temp_v1) {
            var_a0 += 1;
            var_a1 += 0x88;
            if (var_a0 >= 8) {
                var_a1 = NULL;
            } else {
                goto loop_2;
            }
        }
        if (var_a1 == NULL) {
            return -1;
        }
        M2C_FIELD(var_a1, s8 *, 0x53) = 0;
        goto block_12;
    }
    M2C_FIELD(((void *)D_008B09E0), s8 *, 0x53) = 0;
    M2C_FIELD(((void *)D_008B09E0), s8 *, 0xDB) = 0;
    M2C_FIELD(((void *)D_008B09E0), s8 *, 0x163) = 0;
    M2C_FIELD(((void *)D_008B09E0), s8 *, 0x1EB) = 0;
block_12:
    return 0;
}
