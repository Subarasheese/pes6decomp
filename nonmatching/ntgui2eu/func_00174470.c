/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00174470(void *arg0) {
    s32 temp_v1;
    s32 var_a1;
    void *temp_v0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xBF0) > 0) {
        do {
            temp_v1 = var_a1 * 0x24;
            var_a1 += 1;
            temp_v0 = temp_v1 + M2C_FIELD(arg0, s32 *, 0xB80);
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) & 0xAF);
        } while (var_a1 < M2C_FIELD(arg0, s32 *, 0xBF0));
    }
    M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
}
