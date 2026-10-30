/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001885E8();                            /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00188540(void *arg0) {
    void *temp_a0;
    void *var_v0;
    void *var_v1;

    func_001885E8();
    M2C_FIELD(arg0, s32 *, 0x974) = 0;
    M2C_FIELD(arg0, s32 *, 0x978) = 0;
    M2C_FIELD(arg0, s32 *, 0x970) = 0x10000016;
    M2C_FIELD(arg0, s32 *, 0x97C) = func_0018A3F0(0x50, 0, 0x16, 0);
    M2C_FIELD(arg0, s32 *, 0xAE0) = 0x60000000;
    var_v0 = arg0 + 0x970;
    var_v1 = arg0 + 0xAF0;
    M2C_FIELD(arg0, s32 *, 0xAE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE8) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0xAEC) = 0;
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
}
