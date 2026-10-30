/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BE6D60(u16);                         /* extern */
s64 func_00BF3F90(M2C_UNK);                         /* extern */
s64 func_00BF3FB0(M2C_UNK);                         /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, s64, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */

s32 func_00BE67A0(void *arg0) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_s1;
    s64 temp_s2;

    if (M2C_FIELD(arg0, u16 *, 8) != 0x11A) {
        return 0;
    }
    temp_s2 = (s64) (func_00BF3F90(0) << 0x30) >> 0x30;
    temp_s1 = (s64) (func_00BF3FB0(0) << 0x30) >> 0x30;
    if (temp_s2 < 2) {
        return 0;
    }
    if (func_00BCF3A0(0x80) == 0) {
        if (func_00BCF3A0(0x400) == 0) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
    } else {
        var_v0 = -1;
    }
    temp_v1 = temp_s1 + var_v0;
    if (var_v0 == 0) {
        return 0;
    }
    var_v0_2 = temp_s2 - 1;
    if (var_v0_2 < temp_v1) {
        var_v0_2 = 0;
    } else if (temp_v1 >= 0) {
        var_v0_2 = temp_v1;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_v0_2;
    func_00BF45D0(0, M2C_FIELD(arg0, u16 *, 8), (s64) ((s64) var_v0_2 << 0x30) >> 0x30, 0, 0);
    func_00BE6D60(M2C_FIELD(arg0, u16 *, 8));
    func_00C1B420(0);
    func_00BF4370(0);
    func_00C1B420(0);
    func_00B91590(0x19, 1);
    func_00B91590(0x19, 1);
    func_00B91590(0xC, 1);
    func_0026E840(0x8400F803);
    return 1;
}
