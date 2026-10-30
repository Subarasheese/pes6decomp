/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005B58F0[];
extern char D_005B58F8[];
extern char D_011DD780[];
extern char D_011DD7A0[];

void func_00143218(void) {
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_v0;

    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), 0, 0);
    }
    if ((*(s32 *)D_005B58F8) != 0) {
        func_001236B8((*(s32 *)D_005B58F8), 0, 0);
    }
    if ((*(s32 *)D_011DD7A0) != 0) {
        if (M2C_FIELD(((void *)D_011DD780), s32 *, 0) != 0) {
            func_001236B8(M2C_FIELD(((void *)D_011DD780), s32 *, 0), 1, 0x40);
            var_v0 = ((void *)D_011DD7A0);
        } else {
            goto block_9;
        }
    } else {
        if (M2C_FIELD(((void *)D_011DD780), s32 *, -0x2880) != 0) {
            func_001236B8(M2C_FIELD(((void *)D_011DD780), s32 *, -0x2880), 0, 0x40);
        }
block_9:
        var_v0 = ((void *)D_011DD7A0) - 0x2860;
    }
    temp_v0 = ((void *)D_011DD780) - 0x2880;
    if (M2C_FIELD(var_v0, s32 *, 4) != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 4);
        if (temp_a0 != 0) {
            func_001236B8(temp_a0, 1, 0x40);
        }
    } else {
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 4);
        if (temp_a0_2 != 0) {
            func_001236B8(temp_a0_2, 0, 0x40);
        }
    }
}
