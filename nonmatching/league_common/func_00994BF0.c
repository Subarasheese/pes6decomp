/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00994BF0(void) {
    s32 var_a2;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a2 = 0;
        do {
            temp_v1 = temp_v0 + var_a2;
            var_a2 += 8;
            temp_a1 = temp_v1 + 0x33E68;
            M2C_FIELD(temp_v1, s8 *, 0x33E68) = 5;
            M2C_FIELD(temp_a1, s8 *, 1) = 5;
            M2C_FIELD(temp_a1, s8 *, 2) = 5;
            M2C_FIELD(temp_a1, s8 *, 3) = 5;
            M2C_FIELD(temp_a1, s8 *, 4) = 5;
            M2C_FIELD(temp_a1, s8 *, 5) = 5;
            M2C_FIELD(temp_a1, s8 *, 6) = 5;
            M2C_FIELD(temp_a1, s8 *, 7) = 5;
        } while (var_a2 < 0x48);
    }
}
