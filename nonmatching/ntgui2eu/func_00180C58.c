/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164238(void *, void *);                  /* extern */
extern s32 (*D_005C14A0)();

s32 func_00180C58(void *arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_s1;

    var_s1 = D_005C14A0();
    if (func_00164238(arg1 + 0x5C0, arg2 + 0x5C0) == 0) {
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x5ED0);
    if (temp_v1 != M2C_FIELD(arg2, s32 *, 0x5ED0)) {
        M2C_FIELD(arg0, s32 *, 0x5ED0) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    temp_v1_2 = M2C_FIELD(arg1, s32 *, 0x5EB0);
    if (temp_v1_2 != M2C_FIELD(arg2, s32 *, 0x5EB0)) {
        M2C_FIELD(arg0, s32 *, 0x5EB0) = temp_v1_2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    temp_v1_3 = M2C_FIELD(arg1, s32 *, 0x5EB4);
    if (temp_v1_3 != M2C_FIELD(arg2, s32 *, 0x5EB4)) {
        M2C_FIELD(arg0, s32 *, 0x5EB4) = temp_v1_3;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    temp_v1_4 = M2C_FIELD(arg1, s32 *, 0x5EB8);
    if (temp_v1_4 != M2C_FIELD(arg2, s32 *, 0x5EB8)) {
        M2C_FIELD(arg0, s32 *, 0x5EB8) = temp_v1_4;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    temp_v1_5 = M2C_FIELD(arg1, s32 *, 0x5EBC);
    if (temp_v1_5 != M2C_FIELD(arg2, s32 *, 0x5EBC)) {
        M2C_FIELD(arg0, s32 *, 0x5EBC) = temp_v1_5;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    if (func_00164238(arg1 + 0x5EA0, arg2 + 0x5EA0) == 0) {
        var_s1 = 1;
        M2C_FIELD(arg0, s64 *, 0x5EA0) = (s64) M2C_FIELD(arg1, s64 *, 0x5EA0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0x5EA8) = (s64) M2C_FIELD(arg1, s64 *, 0x5EA8);
    }
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x5EE4);
    if (temp_a0 != M2C_FIELD(arg2, s32 *, 0x5EE4)) {
        M2C_FIELD(arg0, s32 *, 0x5EE4) = temp_a0;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    return var_s1;
}
