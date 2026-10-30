/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002A54E0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = arg1 & 0xFFFF;
    if (temp_v1 & 3) {
        temp_a1 = arg2 & 0xFF;
        if ((temp_a1 < 0x17) && (temp_a1 > 0)) {
            if (temp_a1 >= 0xC) {
                if (temp_v1 & 1) {
                    *arg0 |= 0x7FF000;
                }
                if (temp_v1 & 2) {
                    var_a1 = *arg0 | 0xFFE;
                    goto block_16;
                }
            } else {
                if (temp_v1 & 1) {
                    *arg0 |= 0xFFE;
                }
                if (temp_v1 & 2) {
                    var_a1 = *arg0 | 0x7FF000;
                    goto block_16;
                }
            }
        } else {
            var_a1 = *arg0 | 0x7FFFFE;
block_16:
            *arg0 = var_a1;
        }
        *arg0 |= 1;
    }
    if (temp_v1 & 4) {
        *arg0 |= 0x07800000;
    }
    if (temp_v1 & 8) {
        *arg0 |= 0x08000000;
    }
    if (temp_v1 & 0x10) {
        *arg0 |= 0x10000000;
    }
    *arg0 &= ~(1 << (arg2 & 0xFF));
}
