/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_003E996C)(void *, s64 *, M2C_UNK, s32, s64);

void func_001DB120(void **arg0, void **arg1, M2C_UNK arg2, s32 arg3, s64 arg4) {
    s64 sp90;
    s64 sp98;
    s64 spA0;
    s64 spA8;
    s32 var_a3;
    s64 var_a4;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *var_s3;

    var_a3 = arg3;
    var_a4 = arg4;
    var_s3 = *arg1;
    do {
        if ((M2C_FIELD(var_s3, u8 *, 0xDC) != 0) && !(((s32) M2C_FIELD(var_s3, u8 *, 0xDD) >> 1) & 1)) {
            temp_s2 = M2C_FIELD(var_s3, void **, 0x14);
            temp_s0 = *arg0;
            temp_s1 = M2C_FIELD(temp_s2, s32 *, 8) + 0x34;
            D_003E996C(var_s3 + 0x70, &sp90, 4, var_a3, var_a4);
            var_a4 = M2C_FIELD(temp_s2, s64 *, 0x20);
            var_a3 = 0xD;
            M2C_FIELD(temp_s0, s64 *, 0) = var_a4;
            M2C_FIELD(temp_s0, s64 *, 8) = 6;
            M2C_FIELD(temp_s0, s64 *, 0x10) = (s64) M2C_FIELD(var_s3, s64 *, 0xB8);
            M2C_FIELD(temp_s0, s64 *, 0x18) = 1;
            M2C_FIELD(temp_s0, s64 *, 0x20) = (s64) ((M2C_FIELD(temp_s1, s16 *, 0) * 0x10) | ((M2C_FIELD(temp_s1, s16 *, 2) * 0x10) << 0x10));
            M2C_FIELD(temp_s0, s64 *, 0x28) = 3;
            M2C_FIELD(temp_s0, s64 *, 0x30) = sp90;
            M2C_FIELD(temp_s0, s64 *, 0x38) = 0xD;
            M2C_FIELD(temp_s0, s64 *, 0x40) = (s64) ((M2C_FIELD(temp_s1, s16 *, 4) * 0x10) | ((M2C_FIELD(temp_s1, s16 *, 6) * 0x10) << 0x10));
            M2C_FIELD(temp_s0, s64 *, 0x48) = 3;
            M2C_FIELD(temp_s0, s64 *, 0x50) = (s64) sp98;
            M2C_FIELD(temp_s0, s64 *, 0x58) = 0xD;
            M2C_FIELD(temp_s0, s64 *, 0x60) = (s64) ((M2C_FIELD(temp_s1, s16 *, 8) * 0x10) | ((M2C_FIELD(temp_s1, s16 *, 0xA) * 0x10) << 0x10));
            M2C_FIELD(temp_s0, s64 *, 0x68) = 3;
            M2C_FIELD(temp_s0, s64 *, 0x70) = (s64) spA0;
            M2C_FIELD(temp_s0, s64 *, 0x78) = 5;
            M2C_FIELD(temp_s0, s64 *, 0x80) = (s64) ((M2C_FIELD(temp_s1, s16 *, 0xC) * 0x10) | ((M2C_FIELD(temp_s1, s16 *, 0xE) * 0x10) << 0x10));
            M2C_FIELD(temp_s0, s64 *, 0x88) = 3;
            M2C_FIELD(temp_s0, s64 *, 0x90) = (s64) spA8;
            M2C_FIELD(temp_s0, s64 *, 0x98) = 5;
            *arg0 += 0xA0;
        }
        M2C_FIELD(var_s3, u8 *, 0xDD) = (u8) (M2C_FIELD(var_s3, u8 *, 0xDD) & 0xFD);
        var_s3 = M2C_FIELD(var_s3, void **, 4);
    } while (var_s3 != NULL);
}
