/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_001ABB58(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = *arg0;
    var_a0 = arg0 + 1;
    var_a3 = 0;
    var_a2 = temp_v1 & 0x7F;
    if (temp_v1 & 0x80) {
        do {
            temp_v1_2 = *var_a0;
            var_a0 += 1;
            var_a3 += 7;
            var_a2 |= (temp_v1_2 & 0x7F) << var_a3;
        } while (temp_v1_2 & 0x80);
    }
    *arg1 = var_a2;
    return var_a0;
}
