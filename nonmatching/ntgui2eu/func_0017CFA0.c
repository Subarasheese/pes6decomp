/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164238(void *, void *);                  /* extern */
extern s32 (*D_005C00A8)();

s32 func_0017CFA0(void *arg0, void *arg1, void *arg2) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    s64 temp_a0;
    s64 temp_v1_2;

    var_s1 = D_005C00A8();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x920);
    if (temp_v1 != M2C_FIELD(arg2, s32 *, 0x920)) {
        M2C_FIELD(arg0, s32 *, 0x920) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    var_v0 = var_s1;
    if (func_00164238(arg1 + 0x940, arg2 + 0x940) == 0) {
        M2C_FIELD(arg0, s64 *, 0x950) = (s64) M2C_FIELD(arg0, s64 *, 0x940);
        M2C_FIELD(arg0, s64 *, 0x958) = (s64) M2C_FIELD(arg0, s64 *, 0x948);
        temp_v1_2 = M2C_FIELD(arg1, s64 *, 0x940);
        M2C_FIELD(arg0, s64 *, 0x940) = temp_v1_2;
        temp_a0 = M2C_FIELD(arg1, s64 *, 0x948);
        M2C_FIELD(arg0, s64 *, 0x948) = temp_a0;
        if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x110)(arg0);
        } else {
            M2C_FIELD(arg0, s64 *, 0x930) = temp_v1_2;
            M2C_FIELD(arg0, s64 *, 0x938) = temp_a0;
        }
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_v0 = 1;
    }
    return var_v0;
}
