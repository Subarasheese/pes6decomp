/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00179788(void *);
extern char D_003CC848[];
extern char D_003CC870[];
extern char D_00510D20[];

s32 func_00179F60(u32 arg0, u32 arg1) {
    M2C_UNK *var_a0;
    s32 (*temp_v1)(s32, M2C_UNK);
    s32 var_a2;
    void *temp_v0;

    var_a2 = 0;
    if (arg1 >= 6U) {
        var_a0 = ((void *)D_003CC848);
        goto block_7;
    }
    if (arg0 < 8U) {
        temp_v0 = ((void *)D_00510D20) + ((arg0 * 0x48) + (arg1 * 0xC));
        temp_v1 = M2C_FIELD(temp_v0, s32 (**)(s32, M2C_UNK), 0);
        if (temp_v1 != NULL) {
            var_a2 = temp_v1(M2C_FIELD(temp_v0, s32 *, 4), 0);
        }
        return var_a2;
    }
    var_a0 = ((void *)D_003CC870);
block_7:
    func_00179788(var_a0);
    return 0;
}
