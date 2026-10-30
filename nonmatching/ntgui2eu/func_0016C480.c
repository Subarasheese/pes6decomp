/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164238(s32, s32);                        /* extern */
extern s32 (*D_005C14A0)();

s32 func_0016C480(void *arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 var_s1;

    var_s1 = D_005C14A0();
    if (func_00164238(arg1 + 0x40C30, arg2 + 0x40C30) == 0) {
        var_s1 = 1;
        M2C_FIELD(arg0, s64 *, 0x40C30) = (s64) M2C_FIELD(arg1, s64 *, 0x40C30);
        M2C_FIELD(arg0, s64 *, 0x40C38) = (s64) M2C_FIELD(arg1, s64 *, 0x40C38);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_a3 = M2C_FIELD(arg1, s32 *, 0x40C40);
    if (temp_a3 != M2C_FIELD(arg2, s32 *, 0x40C40)) {
        M2C_FIELD(arg0, s32 *, 0x40C40) = temp_a3;
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_a3_2 = M2C_FIELD(arg1, s32 *, 0x40C1C);
    if (temp_a3_2 != M2C_FIELD(arg2, s32 *, 0x40C1C)) {
        M2C_FIELD(arg0, s32 *, 0x40C1C) = temp_a3_2;
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_a3_3 = M2C_FIELD(arg1, s32 *, 0x40C20);
    if (temp_a3_3 != M2C_FIELD(arg2, s32 *, 0x40C20)) {
        M2C_FIELD(arg0, s32 *, 0x40C20) = temp_a3_3;
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_a3_4 = M2C_FIELD(arg1, s32 *, 0x40C14);
    if (temp_a3_4 != M2C_FIELD(arg2, s32 *, 0x40C14)) {
        M2C_FIELD(arg0, s32 *, 0x40C14) = temp_a3_4;
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x40C18);
    if (temp_a0 != M2C_FIELD(arg2, s32 *, 0x40C18)) {
        M2C_FIELD(arg0, s32 *, 0x40C18) = temp_a0;
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    return var_s1;
}
