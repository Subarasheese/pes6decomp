/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA998;

void func_009A84F0(s32 arg0) {
    if (D_003EA998 != NULL) {
        M2C_FIELD(D_003EA998, s32 *, 0xC) = arg0;
        M2C_FIELD(D_003EA998, s32 *, 0x10) = 0x6B;
        M2C_FIELD(D_003EA998, s32 *, 0x14) = 0x6B;
        M2C_FIELD(D_003EA998, s32 *, 0x18) = 0x6B;
        M2C_FIELD(D_003EA998, s32 *, 0x1C) = 0x6B;
        M2C_FIELD(D_003EA998, s32 *, 0x20) = 0x6B;
        M2C_FIELD(D_003EA998, s8 *, 0) = 0;
        M2C_FIELD(D_003EA998, s32 *, 4) = 0;
        M2C_FIELD(D_003EA998, s32 *, 8) = 0;
        M2C_FIELD(D_003EA998, s8 *, 0x24) = 0;
    }
}
