/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00238330(s32);
s32 func_00B542D0();                                /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B56A40(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_00B54300();
    temp_s0 = func_00B542D0();
    temp_a0 = func_00225820() & 0xFF;
    if (temp_s0 == 1) {
        if (temp_s1 == 0) {
            return 1;
        }
        goto block_6;
    }
    if (((func_00238330(temp_a0) & 0xFF) != 4) && (temp_s1 == 0)) {
        return 1;
    }
block_6:
    return 0;
}
