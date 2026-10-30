/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD8E0[];

void func_00C104F0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    void *temp_a0_2;
    void *temp_a2;

    temp_a0 = arg1 & 0xFF;
    temp_a2 = ((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4);
    if (temp_a0 < 0x12) {
        temp_a0_2 = (temp_a0 * 0x28) + temp_a2;
        M2C_FIELD(temp_a2, s8 *, 0x1C) = (s8) (M2C_FIELD(temp_a2, s8 *, 0x1C) + 1);
        M2C_FIELD(temp_a0_2, s8 *, 0x40) = (s8) (M2C_FIELD(temp_a0_2, s8 *, 0x40) + 1);
    }
}
