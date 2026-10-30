/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB5360[];

void func_009617B0(void *arg0) {
    s32 *temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1F4);
    if (temp_v1 > 0) {
        M2C_FIELD(arg0, s32 *, 0x1F4) = (s32) (temp_v1 - 1);
    }
    temp_a1 = ((void *)D_00CB5360) + (M2C_FIELD(arg0, u8 *, 0x13) * 4);
    *temp_a1 += 1;
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1F0);
    if (temp_v1_2 > 0) {
        M2C_FIELD(arg0, s32 *, 0x1F0) = (s32) (temp_v1_2 - 1);
    }
}
