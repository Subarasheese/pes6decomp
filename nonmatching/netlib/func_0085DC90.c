/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_002DCE70(u16);
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
void *func_008472C0();                              /* extern */

s32 func_0085DC90(M2C_UNK arg0, s32 arg1) {
    s32 var_s0;
    void *temp_a0;
    void *temp_v1;
    void *var_s1;

    var_s1 = func_008472C0();
    var_s0 = 0;
    do {
        temp_a0 = arg1 + (var_s0 * 2);
        temp_v1 = arg1 + (var_s0 * 4);
        M2C_FIELD(var_s1, s16 *, 0) = (s16) M2C_FIELD(temp_a0, s16 *, 0x138);
        M2C_FIELD(var_s1, s32 *, 4) = (s32) M2C_FIELD(temp_v1, s32 *, 0x148);
        M2C_FIELD(var_s1, s32 *, 8) = (s32) M2C_FIELD(temp_v1, s32 *, 0x108);
        M2C_FIELD(var_s1, s32 *, 0x10) = (s32) M2C_FIELD(temp_v1, s32 *, 0x108);
        M2C_FIELD(var_s1, u16 *, 0xE) = func_002DCE70(M2C_FIELD(temp_a0, u16 *, 0x128));
        M2C_FIELD(var_s1, u8 *, 0x51) = (u8) M2C_FIELD((arg1 + var_s0), u8 *, 0x168);
        func_001C8590(var_s1 + 0x1C, arg1 + (var_s0 << 5) + 8, 0x20);
        var_s0 += 1;
        var_s1 += 0x88;
    } while (var_s0 < 8);
    return 0;
}
