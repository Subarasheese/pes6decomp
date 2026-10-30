/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003EA674;
extern void *D_00908CA8;
extern void *D_00908CF8;

void func_008F9AD0(void) {
    M2C_FIELD(D_00908CF8, s32 *, 0xE4) = 0xC2213333;
    if ((D_003EA674 == 0xC) && (M2C_FIELD(M2C_FIELD(D_00908CA8, void **, 4), f32 *, 0x38) == 0.0f)) {
        M2C_FIELD(D_00908CA8, s32 *, 0xE0) = 0xC3498000;
        M2C_FIELD(D_00908CA8, s32 *, 0xE8) = 0x45118333;
    }
}
