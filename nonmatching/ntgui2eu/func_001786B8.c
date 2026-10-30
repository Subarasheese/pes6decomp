/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00178778(void *);                      /* extern */
M2C_UNK func_001788C0();                            /* extern */
M2C_UNK func_00178AD8(void *);                      /* extern */
M2C_UNK func_00178D18(void *);                      /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_001786B8(void *arg0) {
    void *temp_a0;
    void *var_v0;
    void *var_v1;

    func_001788C0();
    func_00178778(arg0);
    func_00178AD8(arg0);
    func_00178D18(arg0);
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    M2C_FIELD(arg0, s32 *, 0x918) = 0;
    M2C_FIELD(arg0, s32 *, 0x910) = 0x1000019A;
    M2C_FIELD(arg0, s32 *, 0x91C) = func_0018A3F0(0x50, 0, 0x19A, 0);
    M2C_FIELD(arg0, s32 *, 0x22C0) = 0x60000000;
    var_v0 = arg0 + 0x910;
    var_v1 = arg0 + 0x22D0;
    M2C_FIELD(arg0, s32 *, 0x22C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x22C8) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0x22CC) = 0;
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
}
