/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001665C0();                            /* extern */
M2C_UNK func_001667E0(void *);                      /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00166510(void *arg0) {
    void *temp_a0;
    void *var_v0;
    void *var_v1;

    M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
    func_001665C0();
    func_001667E0(arg0);
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0x1000001E;
    M2C_FIELD(arg0, s32 *, 0xDC) = func_0018A3F0(0x50, 0, 0x1E, 0);
    M2C_FIELD(arg0, s32 *, 0x2C0) = 0x60000000;
    var_v0 = arg0 + 0xD0;
    var_v1 = arg0 + 0x2D0;
    M2C_FIELD(arg0, s32 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C8) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0x2CC) = 0;
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
}
