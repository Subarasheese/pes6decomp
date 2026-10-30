/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00B277A0(void) {
    s32 var_a5;
    u8 temp_s0;
    void *temp_v0;
    void *var_a4;

    temp_v0 = func_00228960();
    temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x100);
    func_001C48E8(temp_v0, 0, 0x104);
    M2C_FIELD(temp_v0, s8 *, 0x49) = 0x21;
    var_a5 = 0;
    M2C_FIELD(temp_v0, s8 *, 0x48) = 0x21;
    var_a4 = temp_v0;
    M2C_FIELD(temp_v0, s8 *, 0x51) = 0xD;
    M2C_FIELD(temp_v0, s8 *, 0x50) = 0xD;
    M2C_FIELD(temp_v0, s8 *, 0x59) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x58) = 0;
    do {
        if ((u32) (var_a5 - 0x1A) < 3U) {
            M2C_FIELD(var_a4, s8 *, 0x61) = 4;
            M2C_FIELD(var_a4, s8 *, 0x60) = 4;
        } else if (var_a5 == 0x1D) {
            M2C_FIELD(var_a4, s8 *, 0x61) = 2;
            M2C_FIELD(var_a4, s8 *, 0x60) = 2;
        } else {
            M2C_FIELD(var_a4, s8 *, 0x61) = 0x46;
            M2C_FIELD(var_a4, s8 *, 0x60) = 0x46;
        }
        var_a5 += 1;
        var_a4 += 4;
    } while (var_a5 < 0x1E);
    M2C_FIELD(temp_v0, s16 *, 0xE6) = 0x258;
    M2C_FIELD(temp_v0, s16 *, 0xE4) = 0x258;
    M2C_FIELD(temp_v0, s8 *, 0xF1) = 2;
    M2C_FIELD(temp_v0, s8 *, 0xF0) = 2;
    M2C_FIELD(temp_v0, s16 *, 0xF8) = 0xFFFF;
    M2C_FIELD(temp_v0, u8 *, 0x100) = (s32) (temp_s0 & 0xFF);
}
