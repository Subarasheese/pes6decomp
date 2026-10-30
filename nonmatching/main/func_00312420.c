/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
extern s32 func_002308F0(void);
s32 func_00226240();                                /* extern */

s32 func_00312420(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;

    var_s0 = func_00235B60() & 0xFF;
    temp_v1 = func_002308F0() & 0xFF;
    if ((temp_v1 != 0x38) && (temp_v1 != 0x2C)) {

    } else {
        temp_v1_2 = func_00226240() & 0xFF;
        switch (temp_v1_2) {                        /* irregular */
        case 3:
            var_s0 -= 1;
            break;
        case 2:
            var_s0 -= 1;
            break;
        case 1:
            var_s0 -= 0xA;
            break;
        case 4:
        case 0:
            var_s0 -= 2;
            break;
        }
    }
    return var_s0;
}
