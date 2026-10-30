/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C748(s32, void *, M2C_UNK *);      /* extern */
extern char D_005C8D68[];
extern char D_011FC830[];
extern char D_011FCD80[];

s32 func_0018F738(s32 arg0) {
    s32 temp_a0;
    void *temp_a1;
    void *temp_s0;

    if ((u32) M2C_FIELD(((void *)D_011FCD80), u32 *, 0) < 0x20U) {
        M2C_FIELD((((void *)D_011FCD80) + (M2C_FIELD(((void *)D_011FCD80), u32 *, 0) * 4)), s32 *, 4) = arg0;
        if (arg0 != 0xFFFF) {
            temp_a1 = ((void *)D_011FCD80) + (M2C_FIELD(((void *)D_011FCD80), u32 *, 0) * 4);
            temp_s0 = (arg0 * 0x28) + ((void *)D_011FC830);
            M2C_FIELD(((void *)D_011FCD80), u32 *, 0) = (u32) (M2C_FIELD(((void *)D_011FCD80), u32 *, 0) + 1);
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
            M2C_FIELD(temp_a1, s32 *, 0x90) = temp_a0;
            func_0018C748(temp_a0, temp_a1, ((void *)D_011FCD80));
            M2C_FIELD(((void *)D_005C8D68), s32 *, 0x1C) = (s32) M2C_FIELD(temp_s0, s16 *, 0x22);
            M2C_FIELD(((void *)D_005C8D68), s32 *, 0x18) = (s32) M2C_FIELD(temp_s0, s16 *, 0x20);
        } else {
            M2C_FIELD((((void *)D_011FCD80) + (M2C_FIELD(((void *)D_011FCD80), u32 *, -0x3280) * 4)), s32 *, 0x90) = 0;
            M2C_FIELD(((void *)D_011FCD80), u32 *, -0x3280) = (u32) (M2C_FIELD(((void *)D_011FCD80), u32 *, -0x3280) + 1);
        }
        if ((u32) M2C_FIELD(((void *)D_011FCD80), u32 *, -0x3280) >= 2U) {
            return M2C_FIELD((((void *)D_011FCD80) - 0x3280 + ((M2C_FIELD(((void *)D_011FCD80), u32 *, -0x3280) - 2) * 4)), s32 *, 4);
        }
        goto block_6;
    }
block_6:
    return -1;
}
