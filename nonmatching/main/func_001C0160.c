/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001E6E10(s32);                             /* extern */
extern char D_00398660[];

s32 func_001C0160(void) {
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;

    var_s1 = 0;
    if (((void *)D_00398660) == NULL) {
        goto block_6;
    }
    if (func_001E6E10(M2C_FIELD(((void *)D_00398660), s32 *, 8)) == 0) {
        M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 0;
block_6:
        var_v1 = 0;
    } else {
        var_v1 = 1;
        M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 1;
        M2C_FIELD(((void *)D_00398660), s32 *, 4) = (s32) M2C_FIELD(((void *)D_00398660), s32 *, 8);
    }
    if ((var_v1 != 0) && !(M2C_FIELD(M2C_FIELD(((void *)D_00398660), void **, 0x64), s32 *, 0x10) & 1)) {
        var_s1 = 1;
    }
    if (M2C_FIELD(((void *)D_00398660), s8 *, 0x18) < 2) {
        if ((u32) (M2C_FIELD(((void *)D_00398660), s32 *, 0x1C) - 7) < 2U) {
            if (((void *)D_00398660) != NULL) {
                if (func_001E6E10(M2C_FIELD(((void *)D_00398660), s32 *, 8)) == 0) {
                    M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 0;
                    goto block_23;
                }
                var_v1_2 = 1;
                M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 1;
                M2C_FIELD(((void *)D_00398660), s32 *, 4) = (s32) M2C_FIELD(((void *)D_00398660), s32 *, 8);
            } else {
block_23:
                var_v1_2 = 0;
            }
            if ((var_v1_2 != 0) && (M2C_FIELD(((void *)D_00398660), s32 *, 0x14) <= 0)) {
                var_s1 = 1;
            } else if (M2C_FIELD(((void *)D_00398660), s32 *, 0x14) != 0) {
                M2C_FIELD(((void *)D_00398660), s32 *, 0x14) = (s32) (M2C_FIELD(((void *)D_00398660), s32 *, 0x14) - 1);
            }
        }
        return var_s1;
    }
    return 0;
}
