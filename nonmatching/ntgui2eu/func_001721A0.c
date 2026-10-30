/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001722E0();                            /* extern */
M2C_UNK func_001724A8(void *, void *, s64, s64, s64); /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_001721A0(void *arg0) {
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_a4;
    void *var_a1;
    void *var_v0;

    func_001722E0();
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    M2C_FIELD(arg0, s32 *, 0x920) = 0x1000000D;
    M2C_FIELD(arg0, s32 *, 0x92C) = func_0018A3F0(0x50, 0, 0xD, 0);
    M2C_FIELD(arg0, s32 *, 0xA00) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0xA04) = 0;
    var_a1 = arg0 + 0xA10;
    M2C_FIELD(arg0, s32 *, 0xA08) = 0;
    var_v0 = arg0 + 0x920;
    M2C_FIELD(arg0, s32 *, 0xA0C) = 0;
    do {
        temp_a3 = M2C_FIELD(var_v0, s64 *, 0x10);
        temp_a4 = M2C_FIELD(var_v0, s64 *, 0x18);
        M2C_FIELD(var_a1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_a1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_a1, s64 *, 0x10) = temp_a3;
        M2C_FIELD(var_a1, s64 *, 0x18) = temp_a4;
        var_v0 += 0x20;
        var_a1 += 0x20;
    } while (var_v0 != (arg0 + 0xA00));
    temp_a2 = M2C_FIELD(var_v0, s64 *, 8);
    M2C_FIELD(var_a1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
    M2C_FIELD(var_a1, s64 *, 8) = temp_a2;
    func_001724A8(arg0, var_a1, temp_a2, temp_a3, temp_a4);
    M2C_FIELD(arg0, s32 *, 0xB04) = 0;
    M2C_FIELD(arg0, s32 *, 0xB08) = 0;
    M2C_FIELD(arg0, s32 *, 0xB00) = 0x10000002;
    M2C_FIELD(arg0, s32 *, 0xB0C) = func_0018A3F0(0x50, 0, 2, 0);
    M2C_FIELD(arg0, s32 *, 0xB30) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0xB34) = 0;
    M2C_FIELD(arg0, s32 *, 0xB38) = 0;
    M2C_FIELD(arg0, s32 *, 0xB3C) = 0;
    M2C_FIELD(arg0, s64 *, 0xB40) = (s64) M2C_FIELD(arg0, s32 *, 0xB00);
    M2C_FIELD(arg0, s64 *, 0xB78) = (s64) M2C_FIELD(arg0, s32 *, 0xB38);
    M2C_FIELD(arg0, s64 *, 0xB48) = (s64) M2C_FIELD(arg0, s32 *, 0xB08);
    M2C_FIELD(arg0, s64 *, 0xB50) = (s64) M2C_FIELD(arg0, s64 *, 0xB10);
    M2C_FIELD(arg0, s64 *, 0xB58) = (s64) M2C_FIELD(arg0, s64 *, 0xB18);
    M2C_FIELD(arg0, s64 *, 0xB60) = (s64) M2C_FIELD(arg0, s64 *, 0xB20);
    M2C_FIELD(arg0, s64 *, 0xB68) = (s64) M2C_FIELD(arg0, s64 *, 0xB28);
    M2C_FIELD(arg0, s64 *, 0xB70) = (s64) M2C_FIELD(arg0, s32 *, 0xB30);
}
