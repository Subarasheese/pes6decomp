/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF390(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BAB400();                            /* extern */
extern char D_00CE4330[];
extern char D_00CE46C0[];

s32 func_00BAAC50(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = func_00BCF390();
    var_s1 = 0;
    if (temp_v0 & 0x40000) {
        var_s1 = 1;
        var_v0 = M2C_FIELD(((void *)D_00CE46C0), s32 *, 0x18) + 1;
        goto block_4;
    }
    if (temp_v0 & 0x8000) {
        var_s1 = 1;
        var_v0 = M2C_FIELD(((void *)D_00CE46C0), s32 *, 0x18) - 1;
block_4:
        M2C_FIELD(((void *)D_00CE46C0), s32 *, 0x18) = var_v0;
    }
    if (var_s1 != 0) {
        var_v0_2 = M2C_FIELD(((void *)D_00CE46C0), s32 *, 0x18);
        if (var_v0_2 >= 3) {
            var_v0_2 = 0;
        } else if (var_v0_2 < 0) {
            var_v0_2 = 2;
        }
        M2C_FIELD(((void *)D_00CE46C0), s32 *, 0x18) = var_v0_2;
        func_00BAB400();
        var_s2 = 0;
        var_s0 = ((void *)D_00CE4330);
        do {
            if ((var_s2 >= 0) && (var_s2 < 8)) {
                var_v1 = var_s0;
            } else {
                var_v1 = NULL;
            }
            M2C_FIELD(var_v1, s8 *, 8) = 1;
            func_00BAB400();
            var_s2 += 1;
            var_s0 += 0x50;
        } while (var_s2 < 8);
        func_0026E840(0x8400F803);
    }
    return var_s1;
}
