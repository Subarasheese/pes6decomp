/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_005C3DC0)();

s32 func_0017F9E0(void *arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 var_v1;

    var_v1 = D_005C3DC0();
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x2888);
    if (temp_a0 != M2C_FIELD(arg2, s32 *, 0x2888)) {
        M2C_FIELD(arg0, s32 *, 0x2888) = temp_a0;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_v1 = 1;
    }
    temp_a0_2 = M2C_FIELD(arg1, s32 *, 0x288C);
    if (temp_a0_2 != M2C_FIELD(arg2, s32 *, 0x288C)) {
        M2C_FIELD(arg0, s32 *, 0x288C) = temp_a0_2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_v1 = 1;
    }
    temp_a0_3 = M2C_FIELD(arg1, s32 *, 0x2890);
    if (temp_a0_3 != M2C_FIELD(arg2, s32 *, 0x2890)) {
        M2C_FIELD(arg0, s32 *, 0x2890) = temp_a0_3;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_v1 = 1;
    }
    temp_a1 = M2C_FIELD(arg1, s32 *, 0x2894);
    if (temp_a1 != M2C_FIELD(arg2, s32 *, 0x2894)) {
        M2C_FIELD(arg0, s32 *, 0x2894) = temp_a1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_v1 = 1;
    }
    return var_v1;
}
