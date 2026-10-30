/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA8AC;

void func_00C92CD0(s32 arg0) {
    s32 temp_a2;

    if (D_003EA8AC != NULL) {
        M2C_FIELD(D_003EA8AC, s32 *, 0xC) = arg0;
        temp_a2 = (arg0 & 1) * 4;
        M2C_FIELD(D_003EA8AC, u8 *, 8) = (u8) ((M2C_FIELD(D_003EA8AC, u8 *, 8) & ~4) | temp_a2);
        M2C_FIELD(D_003EA8AC, s32 *, 0x20) = arg0;
        M2C_FIELD(D_003EA8AC, u8 *, 0x1C) = (u8) ((M2C_FIELD(D_003EA8AC, u8 *, 0x1C) & ~4) | temp_a2);
    }
}
