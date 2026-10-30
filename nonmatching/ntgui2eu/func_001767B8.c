/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00164238(void *, void *);                  /* extern */
M2C_UNK func_00177380(void *);                      /* extern */
M2C_UNK func_00177408(void *, s32);                 /* extern */
M2C_UNK func_001777A8(void *, s32);                 /* extern */
extern s32 (*D_005C14A0)();

s32 func_001767B8(void *arg0, void *arg1, void *arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    void *var_a0;

    var_s4 = 0;
    var_s1 = D_005C14A0();
    var_s5 = 0;
    if (M2C_FIELD(arg1, s64 *, 0x5A0) != M2C_FIELD(arg2, s64 *, 0x5A0)) {
        var_s4 = 1;
        var_s1 = 1;
    }
    if ((M2C_FIELD(arg1, s32 *, 0x5AC) != M2C_FIELD(arg2, s32 *, 0x5AC)) || (var_a0 = arg1 + 0x5C0, (M2C_FIELD(arg1, s32 *, 0x5B0) != M2C_FIELD(arg2, s32 *, 0x5B0)))) {
        var_s4 += 1;
        var_s1 = 1;
        var_a0 = arg1 + 0x5C0;
    }
    temp_v1 = M2C_FIELD(arg1, s32 *, 0xE80);
    if (func_00164238(var_a0, arg2 + 0x5C0) == 0) {
        var_s5 = 1;
        var_s1 = 1;
    }
    if (temp_v1 != M2C_FIELD(arg2, s32 *, 0xE80)) {
        M2C_FIELD(arg0, s32 *, 0xE80) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    temp_v1_2 = M2C_FIELD(arg1, s32 *, 0xEA4);
    if (temp_v1_2 != M2C_FIELD(arg2, s32 *, 0xEA4)) {
        M2C_FIELD(arg0, s32 *, 0xEA4) = temp_v1_2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        var_s1 = 1;
    }
    temp_a1 = M2C_FIELD(arg1, s32 *, 0xE90);
    if (temp_a1 != M2C_FIELD(arg2, s32 *, 0xE90)) {
        M2C_FIELD(arg0, s32 *, 0xE90) = temp_a1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 2);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_a1_2 = M2C_FIELD(arg1, s32 *, 0xE94);
    if (temp_a1_2 != M2C_FIELD(arg2, s32 *, 0xE94)) {
        M2C_FIELD(arg0, s32 *, 0xE94) = temp_a1_2;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 4);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_a1_3 = M2C_FIELD(arg1, s32 *, 0xE78);
    if (temp_a1_3 != M2C_FIELD(arg2, s32 *, 0xE78)) {
        M2C_FIELD(arg0, s32 *, 0xE78) = temp_a1_3;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 8);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_a1_4 = M2C_FIELD(arg1, s32 *, 0xE7C);
    if (temp_a1_4 != M2C_FIELD(arg2, s32 *, 0xE7C)) {
        M2C_FIELD(arg0, s32 *, 0xE7C) = temp_a1_4;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 8);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_v1_3 = M2C_FIELD(arg1, s32 *, 0xE84);
    if (temp_v1_3 != M2C_FIELD(arg2, s32 *, 0xE84)) {
        M2C_FIELD(arg0, s32 *, 0xE84) = temp_v1_3;
        func_001777A8(arg0, temp_a1_4);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 0x10);
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_a1_5 = M2C_FIELD(arg1, s32 *, 0xE88);
    if (temp_a1_5 != M2C_FIELD(arg2, s32 *, 0xE88)) {
        M2C_FIELD(arg0, s32 *, 0xE88) = temp_a1_5;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 1);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    temp_a1_6 = M2C_FIELD(arg1, s32 *, 0xE8C);
    if (temp_a1_6 != M2C_FIELD(arg2, s32 *, 0xE8C)) {
        M2C_FIELD(arg0, s32 *, 0xE8C) = temp_a1_6;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s64 *, 0xEB0) = (s64) (M2C_FIELD(arg0, s64 *, 0xEB0) | 1);
        var_s1 = 1;
        M2C_FIELD(arg0, s32 *, 0xEA8) = 2;
    }
    if (var_s4 != 0) {
        func_00177408(arg0, temp_a1_6);
    }
    if (var_s5 != 0) {
        func_00177380(arg0);
    }
    return var_s1;
}
