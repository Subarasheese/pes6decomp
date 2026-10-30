/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK, s32, u8 *, M2C_UNK, void *); /* extern */

void func_0028E4E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    s32 var_a1;
    s32 var_t0;
    u8 *temp_a5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    var_t0 = 0;
    do {
        temp_v0 = arg2 + var_t0;
        temp_a5 = arg1 + var_t0;
        M2C_FIELD(temp_v0, u8 *, 0x40) = 0xFFU;
        temp_v0_2 = arg0 + var_t0;
        M2C_FIELD((arg2 + M2C_FIELD(temp_v0_2, u8 *, 5)), u8 *, 0x20) = (u8) *temp_a5;
        if (*temp_a5 == 0) {
            M2C_FIELD(temp_v0, u8 *, 0x40) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
        }
        var_t0 += 1;
    } while (var_t0 < 0x20);
    var_a1 = 0;
    do {
        temp_v1 = arg0 + var_a1;
        if ((M2C_FIELD(temp_v1, u8 *, 0x25) == 0) || (M2C_FIELD(temp_v1, u8 *, 0x65) != 0)) {
            M2C_FIELD((arg2 + var_a1), s8 *, 0x20) = 0;
        }
        var_a1 += 1;
    } while (var_a1 < 0x20);
    var_a0 = 0;
    do {
        temp_v1_2 = arg3 + var_a0;
        M2C_FIELD(temp_v1_2, s8 *, 0xA4) = 0;
        var_a0 += 5;
        M2C_FIELD(temp_v1_2, s8 *, 0xA5) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 0xA6) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 0xA7) = 0;
        M2C_FIELD(temp_v1_2, s8 *, 0xA8) = 0;
    } while (var_a0 < 6);
    M2C_FIELD((var_a0 + arg3), s8 *, 0xA4) = 0;
    func_001C48E8(arg2, 0, 0x20, temp_v0_2 + 5, temp_a5, 0xFF, temp_v0 + 0x40);
}
