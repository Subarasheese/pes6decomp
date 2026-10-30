/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00264280(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a3;
    s32 var_a3_2;
    u32 var_a1;
    u8 *var_a0;

    temp_a2 = arg1 & 0xFF;
    var_a3 = 0;
    var_a1 = 0;
    do {
        if ((s32) M2C_FIELD((arg0 + var_a1), u8 *, 0x31) >= temp_a2) {
            var_a3 = (var_a3 + 1) & 0xFF;
        }
        var_a1 += 1;
    } while (var_a1 < 8U);
    temp_a1 = var_a3 & 0xFF;
    var_a3_2 = 0;
    if (temp_a1 > 0) {
        var_a0 = arg0 + temp_a2;
        do {
            if (*var_a0 != 0) {

            }
            var_a3_2 += 1;
            var_a0 += 5;
        } while (var_a3_2 < temp_a1);
    }
}
