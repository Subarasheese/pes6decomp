/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00224D90(s32, s32);                        /* extern */
void *func_00970870(s32);                           /* extern */

s32 func_009783E0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = func_00225820() & 0xFF;
    temp_a0 = func_00224D90(temp_s0, arg0) & 0xFFFF;
    if (temp_a0 == 0) {
        return 0;
    }
    temp_v0 = func_00970870(temp_a0);
    if (temp_v0 != NULL) {
        temp_s0_2 = M2C_FIELD(temp_v0, u8 *, 0x17) & 0x7F;
        temp_a0_2 = func_00224D90(temp_s0, arg1) & 0xFFFF;
        if (temp_a0_2 == 0) {
            return 0;
        }
        temp_v0_2 = func_00970870(temp_a0_2);
        if (temp_v0_2 != NULL) {
            temp_v1 = (temp_s0_2 & 0xFF) + (M2C_FIELD(temp_v0_2, u8 *, 0x17) & 0x7F);
            var_v0 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_v0 = (s32) (temp_v1 + 1) >> 1;
            }
            return var_v0 & 0xFF;
        }
        return 0;
    }
    return 0;
}
