/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00176D60();                            /* extern */
M2C_UNK func_00176E80(void *, s64, s64, s64, s64);  /* extern */
M2C_UNK func_00176FA8(void *, s64, s64, s64, s64);  /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00176A30(void *arg0) {
    s64 temp_a1;
    s64 temp_a1_2;
    s64 temp_a2;
    s64 temp_a2_2;
    s64 temp_a3;
    s64 temp_a3_2;
    s64 temp_a4;
    s64 temp_a4_2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_a0;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;
    void *var_v1;
    void *var_v1_2;

    func_00176D60();
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    M2C_FIELD(arg0, s32 *, 0x918) = 0;
    M2C_FIELD(arg0, s32 *, 0x910) = 0x10000007;
    M2C_FIELD(arg0, s32 *, 0x91C) = func_0018A3F0(0x50, 0, 7, 0);
    M2C_FIELD(arg0, s32 *, 0x9A0) = 0x60000000;
    var_v0 = arg0 + 0x910;
    var_v1 = arg0 + 0x9B0;
    M2C_FIELD(arg0, s32 *, 0x9A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9A8) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0x9AC) = 0;
    do {
        temp_a1 = M2C_FIELD(var_v0, s64 *, 0);
        temp_a2 = M2C_FIELD(var_v0, s64 *, 8);
        temp_a3 = M2C_FIELD(var_v0, s64 *, 0x10);
        temp_a4 = M2C_FIELD(var_v0, s64 *, 0x18);
        M2C_FIELD(var_v1, s64 *, 0) = temp_a1;
        M2C_FIELD(var_v1, s64 *, 8) = temp_a2;
        M2C_FIELD(var_v1, s64 *, 0x10) = temp_a3;
        M2C_FIELD(var_v1, s64 *, 0x18) = temp_a4;
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
    func_00176E80(arg0, temp_a1, temp_a2, temp_a3, temp_a4);
    M2C_FIELD(arg0, s32 *, 0xA54) = 0;
    M2C_FIELD(arg0, s32 *, 0xA58) = 0;
    M2C_FIELD(arg0, s32 *, 0xA50) = 0x10000007;
    M2C_FIELD(arg0, s32 *, 0xA5C) = func_0018A3F0(0x50, 0, 7, 0);
    M2C_FIELD(arg0, s32 *, 0xAE0) = 0x60000000;
    var_v0_2 = arg0 + 0xA50;
    var_v1_2 = arg0 + 0xAF0;
    M2C_FIELD(arg0, s32 *, 0xAE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE8) = 0;
    temp_a0_2 = var_v1_2;
    M2C_FIELD(arg0, s32 *, 0xAEC) = 0;
    do {
        temp_a1_2 = M2C_FIELD(var_v0_2, s64 *, 0);
        temp_a2_2 = M2C_FIELD(var_v0_2, s64 *, 8);
        temp_a3_2 = M2C_FIELD(var_v0_2, s64 *, 0x10);
        temp_a4_2 = M2C_FIELD(var_v0_2, s64 *, 0x18);
        M2C_FIELD(var_v1_2, s64 *, 0) = temp_a1_2;
        M2C_FIELD(var_v1_2, s64 *, 8) = temp_a2_2;
        M2C_FIELD(var_v1_2, s64 *, 0x10) = temp_a3_2;
        M2C_FIELD(var_v1_2, s64 *, 0x18) = temp_a4_2;
        var_v0_2 += 0x20;
        var_v1_2 += 0x20;
    } while (var_v0_2 != temp_a0_2);
    func_00176FA8(arg0, temp_a1_2, temp_a2_2, temp_a3_2, temp_a4_2);
    M2C_FIELD(arg0, s32 *, 0xB94) = 0;
    M2C_FIELD(arg0, s32 *, 0xB98) = 0;
    M2C_FIELD(arg0, s32 *, 0xB90) = 0x10000015;
    M2C_FIELD(arg0, s32 *, 0xB9C) = func_0018A3F0(0x50, 0, 0x15, 0);
    M2C_FIELD(arg0, s32 *, 0xCF0) = 0x60000000;
    M2C_FIELD(arg0, s32 *, 0xCF4) = 0;
    var_a0 = arg0 + 0xD00;
    M2C_FIELD(arg0, s32 *, 0xCF8) = 0;
    var_v0_3 = arg0 + 0xB90;
    M2C_FIELD(arg0, s32 *, 0xCFC) = 0;
    do {
        M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0_3, s64 *, 0);
        M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0_3, s64 *, 8);
        M2C_FIELD(var_a0, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_3, s64 *, 0x10);
        M2C_FIELD(var_a0, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_3, s64 *, 0x18);
        var_v0_3 += 0x20;
        var_a0 += 0x20;
    } while (var_v0_3 != (arg0 + 0xCF0));
    M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0_3, s64 *, 0);
    M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0_3, s64 *, 8);
}
