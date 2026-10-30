/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093D040(s32, s32);
s32 func_00236BA0(u8, u8);                          /* extern */
s32 func_00236DC0();                                /* extern */
extern void *D_003E77B4;

s32 func_0093D240(void) {
    u8 temp_s0;
    u8 temp_s1;

loop_1:
    temp_s0 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
    temp_s1 = M2C_FIELD((D_003E77B4 + (temp_s0 * 0xC)), u8 *, 0x4AB6);
    if (func_00236DC0() != 1) {
        if ((func_00236BA0(temp_s0, temp_s1) == 0) && ((func_0093D040((s32) temp_s0, (s32) temp_s1) & 0xFF) == 1)) {
            return 1 & 0xFF;
        }
        goto loop_1;
    }
    return 0;
}
