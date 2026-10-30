/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA998;

void func_009A63A0(void) {
    if (D_003EA998 != NULL) {
        if (M2C_FIELD(D_003EA998, s32 *, 4) != 0) {
            M2C_FIELD(D_003EA998, s32 *, 0xC) = (s32) M2C_FIELD(((M2C_FIELD(D_003EA998, u8 *, 0) * 4) + D_003EA998), s32 *, 0x10);
            M2C_FIELD(((M2C_FIELD(D_003EA998, u8 *, 0) * 4) + D_003EA998), s32 *, 0x10) = 0x6B;
        } else {
            M2C_FIELD(D_003EA998, s32 *, 0xC) = 0x6B;
        }
    }
}
