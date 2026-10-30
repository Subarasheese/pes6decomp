/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002646E0(void *arg0) {
    s32 var_a2;
    s8 *temp_a1_3;
    u8 *temp_a1;
    void *temp_a1_2;

    temp_a1 = arg0 + M2C_FIELD(arg0, u8 *, 0x14);
    *temp_a1 += 1;
    var_a2 = (M2C_FIELD(arg0, u8 *, 0x14) + 1) & 0xFF;
    if (var_a2 < 0xA) {
        if (((u32) (0xA - var_a2) >= 9U) && ((u32) var_a2 < 0xBU)) {
            do {
                temp_a1_2 = arg0 + var_a2;
                M2C_FIELD(temp_a1_2, s8 *, 0) = 0;
                var_a2 = (var_a2 + 8) & 0xFF;
                M2C_FIELD(temp_a1_2, s8 *, 1) = 0;
                M2C_FIELD(temp_a1_2, s8 *, 2) = 0;
                M2C_FIELD(temp_a1_2, s8 *, 3) = 0;
                M2C_FIELD(temp_a1_2, s8 *, 4) = 0;
                M2C_FIELD(temp_a1_2, s8 *, 5) = 0;
                M2C_FIELD(temp_a1_2, s8 *, 6) = 0;
                M2C_FIELD(temp_a1_2, s8 *, 7) = 0;
            } while (var_a2 < 2);
        }
        if (var_a2 < 0xA) {
            do {
                temp_a1_3 = arg0 + var_a2;
                var_a2 = (var_a2 + 1) & 0xFF;
                *temp_a1_3 = 0;
            } while (var_a2 < 0xA);
        }
    }
}
