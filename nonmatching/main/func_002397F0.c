/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
void *func_0022BFF0(s32, s32);                      /* extern */
void *func_0022C140(s32);                           /* extern */

s32 func_002397F0(s32 arg0, s32 arg1) {
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;

    if (func_00231240() != 1) {
        temp_v0 = func_0022C140(arg0);
        if (temp_v0 != NULL) {
            var_s2 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 5) > 0) {
loop_10:
                temp_v0_2 = func_0022BFF0(arg0, var_s2 & 0xFF);
                if ((temp_v0_2 != NULL) && ((arg1 & 0xFF) == M2C_FIELD(temp_v0_2, u8 *, 0)) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3A) >> 0x3F) == 0)) {
                    return 0;
                }
                var_s2 += 1;
                if (var_s2 >= (s32) M2C_FIELD(temp_v0, u8 *, 5)) {
                    goto block_15;
                }
                goto loop_10;
            }
block_15:
            return 1;
        }
        return 0;
    }
    return 0;
}
