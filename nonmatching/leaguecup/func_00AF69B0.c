/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
void func_00AF69B0(void) {
    s32 temp_a1;
    s32 var_a3;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        var_a3 = 0;
        do {
            temp_a1 = var_a3 & 0xFF;
            var_a3 = (var_a3 + 8) & 0xFF;
            temp_a2 = temp_v0 + (temp_a1 * 2);
            temp_a1_2 = temp_v0 + temp_a1;
            M2C_FIELD(temp_a2, s16 *, 0x76C) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7AC) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x76E) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7AD) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x770) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7AE) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x772) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7AF) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x774) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7B0) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x776) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7B1) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x778) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7B2) = 0xFF;
            M2C_FIELD(temp_a2, s16 *, 0x77A) = 0;
            M2C_FIELD(temp_a1_2, s8 *, 0x7B3) = 0xFF;
        } while (var_a3 < 0x20);
    }
}
