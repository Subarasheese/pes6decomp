/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
s32 func_00814B70(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_0083C270(M2C_UNK);                     /* extern */
s32 func_00840970(s32);                             /* extern */
s32 func_00841940(s32);                             /* extern */
extern char D_00887E80[];
extern char D_0088A930[];
extern char D_0088A970[];

s32 func_008044A0(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    if (((void *)D_0088A930) == NULL) {
        return 0;
    }
    if (((void *)D_0088A930) != NULL) {
        var_v0 = M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C);
    } else {
        var_v0 = 0x14;
    }
    if (var_v0 != 0) {
        var_v0_2 = 0;
    } else if (func_00814B70(1, ((void *)D_00887E80)) != 1) {
        var_v0_2 = 0;
    } else {
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s8 *, 0) = 0;
            M2C_FIELD(((void *)D_0088A930), s32 *, 4) = 0;
            func_001C48E8(((void *)D_0088A970), 0, 0x200);
            if (((void *)D_0088A930) != NULL) {
                M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 1;
            }
        }
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s32 *, 4) = arg0;
            func_001C48E8(((void *)D_0088A930) + 8, 0, 0x31);
            if (arg0 != 0) {
                temp_v0 = func_00840970(func_00841940(M2C_FIELD(((void *)D_0088A930), s32 *, 4)));
                if (temp_v0 != 0) {
                    func_001C8590(((void *)D_0088A930) + 8, temp_v0, 0x30);
                }
            }
        }
        var_v0_2 = 1;
    }
    if (var_v0_2 == 0) {
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s32 *, 4) = 0;
            func_001C48E8(((void *)D_0088A930) + 8, 0, 0x31);
        }
        func_0083C270(2);
    }
    return 1;
}
