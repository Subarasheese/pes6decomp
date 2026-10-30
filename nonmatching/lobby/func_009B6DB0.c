/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
M2C_UNK func_0081D7E0(s32, M2C_UNK);                /* extern */

s32 func_009B6DB0(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    void *var_s2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x2F0);
    if (arg1 != 0) {
        var_v0 = temp_s0 + 1;
    } else {
        var_v0 = temp_s0 - 1;
    }
    M2C_FIELD(arg0, s32 *, 0x2F0) = var_v0;
    var_v0_2 = M2C_FIELD(arg0, s32 *, 0x2F0);
    if (var_v0_2 >= 2) {
        var_v0_2 = 1;
    } else if (var_v0_2 < 0) {
        var_v0_2 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2F0) = var_v0_2;
    var_s3 = 0;
    var_s2 = arg0;
    do {
        if (M2C_FIELD(arg0, s32 *, 0x2E4) >= var_s3) {
            func_001D7D80(M2C_FIELD(var_s2, void **, 0x84), (s16) M2C_FIELD(arg0, s32 *, 0x2F0));
        }
        var_s3 += 1;
        var_s2 += 0x2C;
    } while (var_s3 < 0xC);
    if (M2C_FIELD(arg0, s32 *, 0x2F0) != 0) {
        func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x2C0), 1);
        func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x4C), 0);
        func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x50), 1);
    } else {
        func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x2C0), 0);
        func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x4C), 1);
        func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x50), 0);
    }
    func_001D7D80(M2C_FIELD(arg0, void **, 0x5C), (s16) M2C_FIELD(arg0, s32 *, 0x2F0));
    if (temp_s0 == M2C_FIELD(arg0, s32 *, 0x2F0)) {
        return 0;
    }
    return 1;
}
