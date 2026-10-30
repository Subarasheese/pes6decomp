/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00168530();                            /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00168580(void *arg0) {
    void *var_a0;
    void *var_v0;

    func_00168530();
    M2C_FIELD(arg0, s32 *, 0x8E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x8E0) = 0x10000003;
    M2C_FIELD(arg0, s32 *, 0x8EC) = func_0018A3F0(0x50, 0, 3, 0);
    M2C_FIELD(arg0, s32 *, 0x920) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    var_a0 = arg0 + 0x930;
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    var_v0 = arg0 + 0x8E0;
    M2C_FIELD(arg0, s32 *, 0x92C) = 0;
    do {
        M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_a0, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_a0, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_a0 += 0x20;
    } while (var_v0 != (arg0 + 0x920));
    M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
    M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
}
