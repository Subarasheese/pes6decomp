/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00175C48();                            /* extern */
M2C_UNK func_00175D80(void *);                      /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, s32, M2C_UNK);  /* extern */

void func_00175A80(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    void *temp_s1;
    void *var_a0;
    void *var_v0_2;

    func_00175C48();
    temp_s1 = arg0 + 0x910;
    func_00175D80(arg0);
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    M2C_FIELD(arg0, s32 *, 0x920) = 0x10000007;
    M2C_FIELD(arg0, s32 *, 0x92C) = func_0018A3F0(0x50, 0, 7, 0);
    temp_a1 = (1 << M2C_FIELD(temp_s1, s32 *, 0x410)) << M2C_FIELD(temp_s1, s32 *, 0x414);
    if (M2C_FIELD(temp_s1, s32 *, 0x41C) == 0) {
        var_v1 = (s32) ((temp_a1 > -1) ? temp_a1 : (temp_a1 + 3)) >> 2;
    } else {
        var_v1 = (s32) ((temp_a1 > -1) ? temp_a1 : (temp_a1 + 7)) >> 3;
    }
    M2C_FIELD(arg0, s32 *, 0x9A0) = (s32) (var_v1 | 0x30000000);
    M2C_FIELD(arg0, s32 *, 0x9A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x9A4) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x420) & 0x0FFFFFFF);
    temp_a0 = (1 << M2C_FIELD(temp_s1, s32 *, 0x410)) << M2C_FIELD(temp_s1, s32 *, 0x414);
    if (M2C_FIELD(temp_s1, s32 *, 0x41C) == 0) {
        var_v0 = (s32) ((temp_a0 > -1) ? temp_a0 : (temp_a0 + 3)) >> 2;
    } else {
        var_v0 = (s32) ((temp_a0 > -1) ? temp_a0 : (temp_a0 + 7)) >> 3;
    }
    temp_v0 = func_0018A3F0(0x50, 0, var_v0 & 0xFFFF, 0);
    M2C_FIELD(arg0, s32 *, 0x9B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x9AC) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x9B0) = 0x10000012;
    M2C_FIELD(arg0, s32 *, 0x9BC) = func_0018A3F0(0x50, 0, 0x12, 0);
    M2C_FIELD(arg0, s32 *, 0xAE0) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0xAE4) = 0;
    var_a0 = arg0 + 0xAF0;
    M2C_FIELD(arg0, s32 *, 0xAE8) = 0;
    var_v0_2 = arg0 + 0x920;
    M2C_FIELD(arg0, s32 *, 0xAEC) = 0;
    do {
        M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0_2, s64 *, 0);
        M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0_2, s64 *, 8);
        M2C_FIELD(var_a0, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_2, s64 *, 0x10);
        M2C_FIELD(var_a0, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_2, s64 *, 0x18);
        var_v0_2 += 0x20;
        var_a0 += 0x20;
    } while (var_v0_2 != (arg0 + 0xAE0));
    M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0_2, s64 *, 0);
    M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0_2, s64 *, 8);
}
