/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C748(s32, void *, M2C_UNK *);      /* extern */
extern char D_011FC830[];
extern char D_011FCFA0[];

s32 func_0018FAA0(s32 arg0) {
    s32 temp_a0;
    u32 var_v1;
    void *temp_a1;

    if ((u32) M2C_FIELD(((void *)D_011FCFA0), u32 *, 0) < 0x20U) {
        M2C_FIELD((((void *)D_011FCFA0) + (M2C_FIELD(((void *)D_011FCFA0), u32 *, 0) * 4)), s32 *, 4) = arg0;
        if (arg0 != 0xFFFF) {
            temp_a1 = ((void *)D_011FCFA0) + (M2C_FIELD(((void *)D_011FCFA0), u32 *, 0) * 4);
            M2C_FIELD(((void *)D_011FCFA0), u32 *, 0) = (u32) (M2C_FIELD(((void *)D_011FCFA0), u32 *, 0) + 1);
            temp_a0 = M2C_FIELD((((void *)D_011FC830) + (arg0 * 0x28)), s32 *, 8);
            M2C_FIELD(temp_a1, s32 *, 0x90) = temp_a0;
            func_0018C748(temp_a0, temp_a1, ((void *)D_011FCFA0));
            var_v1 = M2C_FIELD(((void *)D_011FCFA0), u32 *, 0);
        } else {
            M2C_FIELD((((void *)D_011FCFA0) + (M2C_FIELD(((void *)D_011FCFA0), u32 *, -0x3060) * 4)), s32 *, 0x90) = 0;
            M2C_FIELD(((void *)D_011FCFA0), u32 *, -0x3060) = (u32) (M2C_FIELD(((void *)D_011FCFA0), u32 *, -0x3060) + 1);
            var_v1 = M2C_FIELD(((void *)D_011FCFA0), u32 *, -0x3060);
        }
        if (var_v1 >= 2U) {
            return M2C_FIELD((((void *)D_011FCFA0) - 0x3060 + ((var_v1 - 2) * 4)), s32 *, 4);
        }
        goto block_6;
    }
block_6:
    return -1;
}
