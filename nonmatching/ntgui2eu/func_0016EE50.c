/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
s32 func_001896B8(s32);                             /* extern */
extern s32 (*D_005C14A0)();

s32 func_0016EE50(void *arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;

    var_a0 = D_005C14A0();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x92C);
    if (temp_v1 != M2C_FIELD(arg2, s32 *, 0x92C)) {
        var_v0 = var_a0;
        if (temp_v1 != 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x920);
            if (temp_a0 != 0) {
                func_00135018(temp_a0);
            }
            M2C_FIELD(arg0, s32 *, 0x920) = func_001896B8(M2C_FIELD(arg1, s32 *, 0x92C));
            M2C_FIELD(arg0, s32 *, 0x98) = 2;
            var_a0 = 1;
            goto block_5;
        }
    } else {
block_5:
        var_v0 = var_a0;
    }
    return var_v0;
}
