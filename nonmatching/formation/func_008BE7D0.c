/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BE7D0(s32 arg0) {
    s32 var_a2;
    void *temp_a1;

    var_a2 = 0;
    do {
        temp_a1 = arg0 + var_a2;
        if (M2C_FIELD((arg0 + M2C_FIELD(temp_a1, u8 *, 0x766)), u8 *, 0x193) != 0) {
            M2C_FIELD(temp_a1, s8 *, 0x73F) = 0;
        }
        var_a2 += 1;
    } while (var_a2 < 0xB);
}
