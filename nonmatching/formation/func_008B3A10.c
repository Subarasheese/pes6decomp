/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008D3490(void *, u8 *, s32, M2C_UNK);  /* extern */
extern u8 D_003E78E4;
extern u8 D_003E78E5;

void func_008B3A10(void *arg0) {
    u8 sp2C;
    u8 sp2D;

    sp2C = D_003E78E4;
    sp2D = D_003E78E5;
    if (M2C_FIELD(arg0, u8 *, 0x29) == 0) {
        M2C_FIELD(arg0, u8 *, 0x29) = 1U;
        func_008D3490(arg0 + 0x1D8C, &sp2C, func_001F08B0(0x3F0014), 1);
    }
}
