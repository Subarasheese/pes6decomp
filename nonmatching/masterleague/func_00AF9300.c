/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00AF9300(void) {
    s32 var_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a1 = 0;
        do {
            temp_a0 = temp_v0 + (var_a1 & 0xFFFF);
            temp_a0_2 = temp_a0 + 0x33EF9;
            M2C_FIELD(temp_a0, s8 *, 0x33EF9) = 0;
            var_a1 = (var_a1 + 8) & 0xFFFF;
            M2C_FIELD(temp_a0_2, s8 *, 1) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 2) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 3) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 4) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 5) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 6) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 7) = 0;
        } while (var_a1 < 0x48);
    }
}
