/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001896B8(s32);                             /* extern */

void func_00174950(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_a0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x910) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x910) = func_001896B8(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x928);
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    if (temp_a0_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x914) = func_001896B8(temp_a0_2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x914) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
}
