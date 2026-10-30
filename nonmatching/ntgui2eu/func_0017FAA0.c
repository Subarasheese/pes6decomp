/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017FB58();                            /* extern */
M2C_UNK func_0017FC88(void *);                      /* extern */
M2C_UNK func_0017FD80(void *);                      /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0017FAA0(void *arg0) {
    void *temp_a0;
    void *var_v0;
    void *var_v1;

    func_0017FB58();
    func_0017FC88(arg0);
    func_0017FD80(arg0);
    M2C_FIELD(arg0, s32 *, 0x974) = 0;
    M2C_FIELD(arg0, s32 *, 0x978) = 0;
    M2C_FIELD(arg0, s32 *, 0x970) = 0x100000F6;
    M2C_FIELD(arg0, s32 *, 0x97C) = func_0018A3F0(0x50, 0, 0xF6, 0);
    M2C_FIELD(arg0, s32 *, 0x18E0) = 0x60000000;
    var_v0 = arg0 + 0x970;
    var_v1 = arg0 + 0x18F0;
    M2C_FIELD(arg0, s32 *, 0x18E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x18E8) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0x18EC) = 0;
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
}
