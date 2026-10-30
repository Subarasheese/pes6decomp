/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164238(void *, s32);                     /* extern */
extern s32 (*D_005C14A0)();

s32 func_0017DEF0(void *arg0, void *arg1, void *arg2) {
    s32 temp_a0_2;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_v0;
    s64 temp_a0;
    s64 temp_v1;
    void *var_a0;

    var_s2 = D_005C14A0();
    var_a0 = arg1 + 0xDE0;
    if (func_00164238(arg1 + 0xDA0, arg2 + 0xDA0) == 0) {
        M2C_FIELD(arg0, s64 *, 0xDB0) = (s64) M2C_FIELD(arg0, s64 *, 0xDA0);
        M2C_FIELD(arg0, s64 *, 0xDB8) = (s64) M2C_FIELD(arg0, s64 *, 0xDA8);
        temp_a0 = M2C_FIELD(arg1, s64 *, 0xDA0);
        M2C_FIELD(arg0, s64 *, 0xDA0) = temp_a0;
        temp_v1 = M2C_FIELD(arg1, s64 *, 0xDA8);
        M2C_FIELD(arg0, s64 *, 0xDA8) = temp_v1;
        if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x110)(arg0);
        } else {
            M2C_FIELD(arg0, s64 *, 0xDC0) = temp_a0;
            M2C_FIELD(arg0, s64 *, 0xDC8) = temp_v1;
        }
        var_s2 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_a0 = arg1 + 0xDE0;
    }
    if (func_00164238(var_a0, arg2 + 0xDE0) == 0) {
        var_s2 = 1;
        M2C_FIELD(arg0, s64 *, 0xDE0) = (s64) M2C_FIELD(arg1, s64 *, 0xDE0);
        M2C_FIELD(arg0, s64 *, 0xDE8) = (s64) M2C_FIELD(arg1, s64 *, 0xDE8);
    }
    temp_v1_2 = M2C_FIELD(arg1, s32 *, 0xDD0);
    if (temp_v1_2 != M2C_FIELD(arg2, s32 *, 0xDD0)) {
        M2C_FIELD(arg0, s32 *, 0xDD0) = temp_v1_2;
        var_s2 = 1;
    }
    temp_a0_2 = M2C_FIELD(arg1, s32 *, 0xDF0);
    var_v0 = var_s2;
    if (temp_a0_2 != M2C_FIELD(arg2, s32 *, 0xDF0)) {
        M2C_FIELD(arg0, s32 *, 0xDF0) = temp_a0_2;
        var_v0 = 1;
    }
    return var_v0;
}
