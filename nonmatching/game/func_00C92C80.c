/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8AC;

void func_00C92C80(u32 arg0, f32 fparg0, f32 fparg1) {
    void *temp_a2;

    if ((D_003EA8AC != 0) && (arg0 < 2U)) {
        temp_a2 = (arg0 * 0x14) + D_003EA8AC;
        M2C_FIELD(temp_a2, f32 *, 0x14) = fparg0;
        M2C_FIELD(temp_a2, f32 *, 0x18) = fparg1;
        M2C_FIELD(temp_a2, u8 *, 8) = (u8) ((M2C_FIELD(temp_a2, u8 *, 8) & ~8) | 8);
    }
}
