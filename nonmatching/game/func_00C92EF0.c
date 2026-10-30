/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8AC;

void func_00C92EF0(u32 arg0, s32 arg1) {
    void *temp_a4;

    if ((D_003EA8AC != 0) && (arg0 < 2U)) {
        temp_a4 = D_003EA8AC + (arg0 * 0x14);
        M2C_FIELD(temp_a4, u8 *, 9) = (u8) ((M2C_FIELD(temp_a4, u8 *, 9) & ~8) | ((arg1 != 0) * 8));
        M2C_FIELD(temp_a4, u8 *, 8) = (u8) ((M2C_FIELD(temp_a4, u8 *, 8) & ~1) | 1);
    }
}
