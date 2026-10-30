/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00D1C7E0(u8 *arg0) {
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
loop_10:
    temp_v1 = *var_a0;
    if (temp_v1 != 0) {
        if ((s32) temp_v1 >= 0xA1) {
            if ((s32) temp_v1 < 0xE0) {
                var_a0 += 1;
            } else {
                goto block_5;
            }
        } else {
block_5:
            if (((s32) temp_v1 >= 0x20) && ((s32) temp_v1 < 0x7F)) {
                var_a0 += 1;
            } else {
                var_a0 += 2;
            }
        }
        goto loop_10;
    }
}
