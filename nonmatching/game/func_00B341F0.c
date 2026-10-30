/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B341F0(void *arg0, s32 arg1, s32 arg2) {
    s16 var_a1_2;
    s32 temp_a5;
    s32 var_a1;
    s32 var_v1;
    void *temp_a3;
    void *temp_a4;

    temp_a4 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(temp_a4, void **, 4);
    if ((M2C_FIELD(temp_a3, u16 *, 0x1A) != 0) && (M2C_FIELD(temp_a3, u8 *, 0xD) & 1)) {
        var_a1 = arg1 & 0xFFFF;
        var_v1 = 0xFFFF & 0xFFFF;
    } else {
        var_v1 = 0xFF;
        var_a1 = ((arg1 & 0xFFFF) << 8) & 0xFFFF;
    }
    temp_a5 = var_a1 & 0xFFFF;
    if (temp_a5 < 0x8000) {
        var_a1_2 = M2C_FIELD(arg0, u16 *, 0x26) + (temp_a5 * ((M2C_FIELD(temp_a4, u8 *, 0x2D) != 0) ? -1 : 1));
    } else {
        var_a1_2 = M2C_FIELD(arg0, u16 *, 0x26) - (((0x10000 - temp_a5) & 0xFFFF) * ((M2C_FIELD(temp_a4, u8 *, 0x2D) != 0) ? -1 : 1));
    }
    M2C_FIELD(arg0, s16 *, 0x28) = var_a1_2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) * (arg2 & 0xFFFF)) / (s32) (var_v1 & 0xFFFF));
}
