/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s64 func_00BF3F90(M2C_UNK);                         /* extern */
s64 func_00BF3FB0(M2C_UNK);                         /* extern */
M2C_UNK func_00BF3FD0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
s16 func_00BF4480(M2C_UNK);                         /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, s64, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF47D0(s64, u16);                    /* extern */
extern void *D_003E7DC0;

s32 func_00BDC730(void) {
    s32 var_a1;
    s64 temp_a0;
    s64 temp_s0;
    s64 temp_s0_2;
    s64 temp_s1;
    s64 temp_v1_2;
    s64 var_v0;
    u16 temp_a1;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    if ((temp_v1 != 0xFFFF) && (temp_v1 != 0x11A) && (temp_v1 != 0x11C)) {
        return 0;
    }
    temp_s0 = (s64) (func_00BF3F90(0) << 0x30) >> 0x30;
    temp_s0_2 = (s64) (temp_s0 << 0x30) >> 0x30;
    temp_s1 = (s64) (func_00BF3FB0(0) << 0x30) >> 0x30;
    if (temp_s0_2 < 2) {
        return 0;
    }
    if (func_00BCF3A0(0x80) == 0) {
        if (func_00BCF3A0(0x400) == 0) {
            var_a1 = 0;
        } else {
            var_a1 = 1;
        }
    } else {
        var_a1 = -1;
    }
    var_v0 = temp_s0_2 - 1;
    temp_v1_2 = ((s64) (temp_s1 << 0x30) >> 0x30) + var_a1;
    if (var_v0 < temp_v1_2) {
        var_v0 = 0;
    } else if (temp_v1_2 >= 0) {
        var_v0 = temp_v1_2;
    }
    temp_a0 = (s64) (var_v0 << 0x30) >> 0x30;
    if (var_a1 == 0) {
        return 0;
    }
    temp_a1 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    if (temp_a1 != 0xFFFF) {
        func_00BF45D0(0, temp_a1, (s64) (temp_a0 << 0x30) >> 0x30, 2, 0);
    } else {
        func_00BF47D0((s64) (temp_a0 << 0x30) >> 0x30, temp_a1);
    }
    func_00BF4370(0);
    M2C_FIELD(D_003E7DC0, s16 *, 0xFA) = func_00BF4480(0);
    func_00B91590(9, 1);
    func_00BF3FD0(0, M2C_FIELD(D_003E7DC0, s32 *, 0x70));
    M2C_FIELD(D_003E7DC0, s16 *, 0xFA) = func_00BF4480(0);
    func_00B91590(0x19, 1);
    M2C_FIELD(D_003E7DC0, s32 *, 0x104) = 1;
    return 1;
}
