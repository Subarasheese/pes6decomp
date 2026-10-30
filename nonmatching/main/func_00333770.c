/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E830(void);
s32 func_00333770(void *arg0, u8 arg1, s16 arg2) {
    s32 temp_a0_3;
    s32 var_v0;
    u8 temp_a0;
    u8 temp_a3;
    void *temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0x36);
    if (temp_a0 != 0xFF) {
        var_v0 = arg1 & 0xFF;
        if ((temp_a0 == (var_v0 ^ 1)) && (M2C_FIELD(((var_v0 * 4) + arg0), s32 *, 8) == 0xD)) {
            M2C_FIELD(arg0, u8 *, 0x36) = 0xFFU;
        }
    } else {
        var_v0 = arg1 & 0xFF;
        if (M2C_FIELD(arg0, u8 *, 0x34) == var_v0) {
            M2C_FIELD(arg0, u8 *, 0x36) = arg1;
            temp_a0_2 = var_v0 + arg0;
            M2C_FIELD(temp_a0_2, u8 *, 0x3C) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 0x3C) + 1);
        }
    }
    temp_a3 = M2C_FIELD(arg0, u8 *, 0x37);
    if (temp_a3 != 0xFF) {
        temp_a0_3 = M2C_FIELD((((arg1 & 0xFF) * 4) + arg0), s32 *, 0x10);
        if ((temp_a0_3 != 0xD) && (temp_a0_3 != 0xB)) {

        } else if (temp_a3 == (var_v0 ^ 1)) {
            M2C_FIELD(arg0, u8 *, 0x37) = 0xFFU;
            M2C_FIELD(arg0, s8 *, 0x38) = 6;
            M2C_FIELD(arg0, s16 *, 0x40) = 0;
        }
    } else if (M2C_FIELD(arg0, u8 *, 0x35) == var_v0) {
        M2C_FIELD(arg0, u8 *, 0x37) = arg1;
        M2C_FIELD(arg0, s16 *, 0x40) = arg2;
        M2C_FIELD(arg0, s8 *, 0x38) = func_0030E830();
    }
    return 1;
}
