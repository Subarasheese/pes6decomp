/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017A260(void *, M2C_UNK, s32, s32, s32, s32, s32, void *, void *, void *); /* extern */

void func_0017A118(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s7;
    s32 var_a1;
    s32 var_a2;
    s32 var_s2;
    void *temp_a7;
    void *temp_s6;
    void *temp_v0;

    temp_s6 = arg0 + 0x910;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_s3 = (s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1;
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x5AC);
    var_a1 = temp_s3;
    var_s2 = temp_s3;
    temp_s5 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a0;
    temp_fp = M2C_FIELD(temp_s6, s32 *, 0x33BC);
    if (temp_s4 < temp_s3) {
        var_s2 = temp_s4;
        var_a1 = var_s2;
    }
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a0 + temp_s3;
    temp_a7 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0) + temp_s6;
    func_0017A260(arg0, 0, temp_s5 + var_a1, temp_s7, var_s2, temp_s3, temp_fp, temp_a7 + 0x710, temp_a7 + 0xA30, temp_a7 + 0xD50);
    var_a2 = (temp_s5 + temp_s4) - var_s2;
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_v0 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0) + temp_s6;
    if (temp_a1 < (var_s2 * 2)) {
        var_a2 = temp_s5 + var_s2;
        var_s2 = temp_a1 - var_s2;
    }
    func_0017A260(arg0, 1, var_a2, temp_s7, var_s2, temp_s3, temp_fp, temp_v0 + 0x1070, temp_v0 + 0x1390, temp_v0 + 0x16B0);
}
