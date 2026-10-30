/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C748(s32);                         /* extern */
extern char D_005C8D68[];
extern char D_011FC830[];
extern char D_011FCD80[];

s32 func_0018F818(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    void *temp_a0_2;

    if (M2C_FIELD(((void *)D_011FCD80), s32 *, 0) == 0) {
        return -1;
    }
    temp_v1 = M2C_FIELD(((void *)D_011FCD80), s32 *, 0) - 1;
    M2C_FIELD(((void *)D_011FCD80), s32 *, -0x3280) = temp_v1;
    temp_a0 = M2C_FIELD((((void *)D_011FCD80) + (temp_v1 * 4)), s32 *, 0x90);
    var_v0 = 0xFFFF;
    if (temp_a0 != 0) {
        func_0018C748(temp_a0);
        var_v0 = M2C_FIELD((((void *)D_011FCD80) + (M2C_FIELD(((void *)D_011FCD80), s32 *, -0x3280) * 4)), s32 *, 4);
        temp_a0_2 = (var_v0 * 0x28) + ((void *)D_011FC830);
        M2C_FIELD(((void *)D_005C8D68), s32 *, 0x1C) = (s32) M2C_FIELD(temp_a0_2, s16 *, 0x22);
        M2C_FIELD(((void *)D_005C8D68), s32 *, 0x18) = (s32) M2C_FIELD(temp_a0_2, s16 *, 0x20);
    }
    return var_v0;
}
