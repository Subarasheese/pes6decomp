/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_00B8F998(M2C_UNK, s32, s32);           /* extern */
extern char D_00C2B530[];

void func_00B8F880(s32 arg0, s32 arg1) {
    s32 var_a1;
    s8 *temp_v1;
    u32 var_a0;
    void *temp_s0;

    M2C_FIELD(((void *)D_00C2B530), M2C_UNK (**)(), 0x10720)();
    var_a0 = 0;
    do {
        temp_v1 = ((void *)D_00C2B530) + 0x10544 + var_a0;
        var_a0 += 1;
        *temp_v1 = 0;
    } while (var_a0 < 0x20U);
    temp_s0 = ((void *)D_00C2B530) - 0x4AD0;
    WaitSema(M2C_FIELD(temp_s0, s32 *, 0x106D4));
    var_a1 = -1;
    if (arg1 == 0) {
        var_a1 = M2C_FIELD(temp_s0, s32 *, 0x106B4);
    }
    func_00B8F998(0, var_a1, arg0);
}
