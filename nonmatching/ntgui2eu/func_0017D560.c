/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017D608();                            /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0017D560(void *arg0) {
    void *temp_a0;
    void *var_v0;
    void *var_v1;

    func_0017D608();
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    M2C_FIELD(arg0, s32 *, 0x920) = 0x10000046;
    M2C_FIELD(arg0, s32 *, 0x92C) = func_0018A3F0(0x50, 0, 0x46, 0);
    M2C_FIELD(arg0, s32 *, 0xD90) = 0x60000000;
    var_v0 = arg0 + 0x920;
    var_v1 = arg0 + 0xDA0;
    M2C_FIELD(arg0, s32 *, 0xD94) = 0;
    M2C_FIELD(arg0, s32 *, 0xD98) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0xD9C) = 0;
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
}
