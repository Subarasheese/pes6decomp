/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001656D0(void *);
extern s32 func_00164238(void);
extern void func_00165778(void *);
extern s32 func_001641F8(void);
extern void func_001659A0(void *);
s32 func_00167448(void *arg0, void *arg1, void *arg2) {
    M2C_UNK (*temp_v0)(void *, s32);
    s32 temp_a0;
    s32 temp_a1;
    s32 var_fp;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;

    var_fp = 0;
    var_s7 = 0;
    var_s6 = 0;
    var_s5 = 0;
    var_s4 = 0;
    var_s3_2 = 0;
    if (M2C_FIELD(arg1, s64 *, 0x5A0) != M2C_FIELD(arg2, s64 *, 0x5A0)) {
        var_s5 = 1;
        var_s4 = 1;
        var_s3_2 = 1;
        func_001656D0(arg0);
    }
    if ((M2C_FIELD(arg1, s32 *, 0x5AC) != M2C_FIELD(arg2, s32 *, 0x5AC)) || (M2C_FIELD(arg1, s32 *, 0x5B0) != M2C_FIELD(arg2, s32 *, 0x5B0))) {
        var_s5 += 1;
        var_s4 += 1;
        func_00165778(arg0);
        var_s3_2 = 1;
    }
    if (M2C_FIELD(arg1, s32 *, 0x5D4) != M2C_FIELD(arg2, s32 *, 0x5D4)) {
        var_s4 += 1;
        func_001659A0(arg0);
        var_s3_2 = 1;
    }
    if (func_001641F8() == 0) {
        var_s6 = 1;
        var_s3_2 = 1;
        M2C_FIELD(arg0, s32 *, 0x5D0) = (s32) M2C_FIELD(arg1, s32 *, 0x5D0);
    }
    if (func_00164238() == 0) {
        var_s7 = 1;
        var_s3_2 = 1;
        M2C_FIELD(arg0, s64 *, 0x5C0) = (s64) M2C_FIELD(arg1, s64 *, 0x5C0);
        M2C_FIELD(arg0, s64 *, 0x5C8) = (s64) M2C_FIELD(arg1, s64 *, 0x5C8);
    }
    temp_a1 = M2C_FIELD(arg1, s32 *, 0x5DC);
    var_s3 = ((M2C_FIELD(arg1, s32 *, 0x5D8) ^ M2C_FIELD(arg2, s32 *, 0x5D8)) != 0) ? 1 : var_s3_2;
    if (temp_a1 != M2C_FIELD(arg2, s32 *, 0x5DC)) {
        M2C_FIELD(arg0, s32 *, 0x5DC) = temp_a1;
        var_fp = 1;
        var_s3 = 1;
    }
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x5F8);
    if (temp_a0 != M2C_FIELD(arg2, s32 *, 0x5F8)) {
        M2C_FIELD(arg0, s32 *, 0x5F8) = temp_a0;
        var_s3 = 1;
    }
    if ((var_s6 != 0) || (var_s7 != 0) || (var_fp != 0) || (var_s5 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    if (var_s4 != 0) {
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, s32), 0xDC);
        if (temp_v0 != NULL) {
            temp_v0(arg0, temp_a1);
        }
    }
    return var_s3;
}
