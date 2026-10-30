/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00C11200(s32 arg0) {
    s32 var_a2;
    void *temp_a1;

    if (arg0 != 0) {
        var_a2 = 0;
        do {
            temp_a1 = arg0 + var_a2;
            M2C_FIELD(temp_a1, s8 *, 0) = 0;
            var_a2 += 8;
            M2C_FIELD(temp_a1, s8 *, 1) = 0;
            M2C_FIELD(temp_a1, s8 *, 2) = 0;
            M2C_FIELD(temp_a1, s8 *, 3) = 0;
            M2C_FIELD(temp_a1, s8 *, 4) = 0;
            M2C_FIELD(temp_a1, s8 *, 5) = 0;
            M2C_FIELD(temp_a1, s8 *, 6) = 0;
            M2C_FIELD(temp_a1, s8 *, 7) = 0;
        } while (var_a2 < 0x18);
    }
}
