/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
void *func_00223E00(s32);                           /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00225680(s32);                             /* extern */

s32 func_00B58EC0(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s1;
    void *temp_v0;

    temp_s0 = func_00225820() & 0xFF;
    if (temp_s0 != 0xFF) {
        if ((func_00225680(temp_s0) & 0xFFFF) != 0xFFFF) {
            var_s1 = 0;
loop_8:
            temp_a0 = func_00224BC0(temp_s0, var_s1 & 0xFF) & 0xFFFF;
            if (temp_a0 != 0) {
                temp_v0 = func_00223E00(temp_a0);
                if ((temp_v0 != NULL) && ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) == 3)) {
                    return 1;
                }
            }
            var_s1 += 1;
            if (var_s1 >= 0x20) {
                goto block_13;
            }
            goto loop_8;
        }
        goto block_13;
    }
block_13:
    return 0;
}
