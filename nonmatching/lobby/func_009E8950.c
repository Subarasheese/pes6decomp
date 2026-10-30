/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_009E8950(void *arg0, s32 (*arg1)(s32), s32 (*arg2)(s32), s32 (*arg3)()) {
    M2C_UNK (*temp_v1_2)(s32, s32);
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    var_s2 = 0;
    temp_s0 = M2C_FIELD(arg0, void **, 0x54);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x48);
    var_s1 = 0;
    if ((temp_v1 != 0) && (arg1 != NULL)) {
        var_s2 = arg1(temp_v1);
    } else if ((temp_a0 == 1) && (arg2 != NULL)) {
        var_s2 = arg2(temp_a0) - 1;
    }
    if (arg3 != NULL) {
        var_s1 = arg3();
    }
    if ((var_s2 >= 0) && (var_s1 >= 0)) {
        temp_v1_2 = M2C_FIELD(temp_s0, M2C_UNK (**)(s32, s32), 0x20);
        if (temp_v1_2 != NULL) {
            temp_v1_2(M2C_FIELD(temp_s0, s32 *, 0), var_s1 + var_s2);
        }
    }
}
