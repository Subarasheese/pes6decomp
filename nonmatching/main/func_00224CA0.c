/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern int func_00231240(void);
void func_00224CA0(s32 arg0, s32 arg1, s16 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s1;
    u8 var_v1;
    void *temp_v1;

    temp_s1 = func_002260F0(arg0);
    if ((func_00231240() != 1) && (temp_s1 != 0)) {
        temp_s0 = func_002260F0(arg0);
        if (func_00231240() == 1) {
            var_v1 = 0xFF;
        } else if (temp_s0 != 0) {
            temp_a0 = arg1 & 0xFF;
            if (temp_a0 < 0x20) {
                var_v1 = M2C_FIELD((temp_a0 + temp_s0), u8 *, 0x4B1);
            } else {
                var_v1 = 0xFF;
            }
        } else {
            var_v1 = 0xFF;
        }
        temp_a0_2 = var_v1 & 0xFF;
        if (temp_a0_2 < 0x20) {
            temp_v1 = (temp_a0_2 * 0x16) + temp_s1;
            M2C_FIELD(temp_v1, s16 *, 0x1E4) = arg2;
            M2C_FIELD(temp_v1, s8 *, 0x1E6) = (s8) arg0;
        }
    }
}
