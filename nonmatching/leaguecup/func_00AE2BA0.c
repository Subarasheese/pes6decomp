/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229310(void);
void func_00AE2BA0(void) {
    s32 temp_a0;
    s32 var_a1;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_00229310();
    if (temp_v0 != NULL) {
        var_a1 = 0;
        M2C_FIELD(temp_v0, s16 *, 2) = 0xFFFF;
        M2C_FIELD(temp_v0, s16 *, 4) = 0;
        M2C_FIELD(temp_v0, s16 *, 6) = 0;
        M2C_FIELD(temp_v0, s8 *, 8) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s8 *, 9) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xD) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xA) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xE) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xB) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xF) = 0;
        do {
            temp_a0 = (var_a1 & 0xFFFF) * 2;
            var_a1 = (var_a1 + 8) & 0xFFFF;
            temp_a0_2 = temp_v0 + temp_a0;
            M2C_FIELD(temp_a0_2, s16 *, 0x10) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x12) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x14) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x16) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x18) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x1A) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x1C) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x1E) = 0;
        } while (var_a1 < 0x177);
        temp_v1 = (var_a1 * 2) + temp_v0;
        M2C_FIELD(temp_v1, s16 *, 0x10) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x12) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x14) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x16) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x18) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x1A) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x1C) = 0;
    }
}
