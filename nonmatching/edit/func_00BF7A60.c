/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CEB720[];

void func_00BF7A60(void) {
    void *temp_a0;

    temp_a0 = ((void *)D_00CEB720) + ((0 % 2) * 0x14);
    M2C_FIELD(temp_a0, s32 *, 0) = 0;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(temp_a0, s16 *, 8) = 0xFFFF;
    M2C_FIELD(temp_a0, s8 *, 0xA) = 0;
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_a0, s8 *, 0x10) = 0;
}
