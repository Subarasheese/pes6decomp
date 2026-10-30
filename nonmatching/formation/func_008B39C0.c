/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D3490(void *, u8 *, u8 *, M2C_UNK); /* extern */
extern u8 D_003E78E8;
extern u8 D_003E78E9;

void func_008B39C0(void *arg0) {
    u8 sp1C;
    u8 sp1D;

    sp1C = D_003E78E8;
    sp1D = D_003E78E9;
    if (M2C_FIELD(arg0, u8 *, 0x29) != 0) {
        M2C_FIELD(arg0, u8 *, 0x29) = 0U;
        func_008D3490(arg0 + 0x1D8C, &sp1C, &sp1C, 1);
    }
}
