/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B1AA10(void *arg0) {
    s32 temp_a2;
    s32 var_a3;
    void *temp_a2_2;

    if (arg0 != NULL) {
        var_a3 = 0;
        M2C_FIELD(arg0, s16 *, 0) = 0xFFFF;
        M2C_FIELD(arg0, s16 *, 2) = 0xFFFF;
        M2C_FIELD(arg0, s16 *, 4) = 0xFFFF;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        do {
            temp_a2 = var_a3 & 0xFF;
            var_a3 = (var_a3 + 1) & 0xFF;
            temp_a2_2 = arg0 + (temp_a2 * 0xC);
            M2C_FIELD(temp_a2_2, s32 *, 0xC) = 0;
            M2C_FIELD(temp_a2_2, s32 *, 0x10) = 0;
            M2C_FIELD(temp_a2_2, s32 *, 0x14) = 0;
            M2C_FIELD((arg0 + (temp_a2 * 4)), s32 *, 0x24) = 0;
        } while (var_a3 < 2);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s8 *, 0x34) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x35) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s8 *, 0x3C) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        M2C_FIELD(arg0, s8 *, 0x46) = 0;
    }
}
