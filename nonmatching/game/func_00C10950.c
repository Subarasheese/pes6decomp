/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD8E0[];

void func_00C10950(s32 arg0, s32 arg1) {
    s32 temp_a1;
    void *temp_a0;

    temp_a1 = arg1 & 0xFF;
    temp_a0 = (temp_a1 * 0x28) + (((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4)) + 0x24;
    if (temp_a1 < 0x12) {
        M2C_FIELD(temp_a0, s16 *, 0xC) = (s16) (M2C_FIELD(temp_a0, s16 *, 0xC) + 1);
    }
}
