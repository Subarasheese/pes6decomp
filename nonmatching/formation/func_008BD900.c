/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BD900(void *arg0) {
    s32 var_v1;
    void *temp_a1;

    var_v1 = 1;
    do {
        temp_a1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_v1;
        if ((s32) M2C_FIELD(temp_a1, u8 *, 0x80B) >= 2) {
            M2C_FIELD(temp_a1, u8 *, 0x80B) = 1U;
            M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_v1), s8 *, 0x816) = 0xFF;
        }
        var_v1 += 1;
    } while (var_v1 < 0xB);
}
