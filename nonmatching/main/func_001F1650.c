/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001F3D80(f32 *, M2C_UNK);              /* extern */

void func_001F1650(void *arg0, f32 fparg0, f32 fparg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;

    if (arg0 != NULL) {
        sp20 = M2C_FIELD(arg0, f32 *, 8);
        sp24 = M2C_FIELD(arg0, f32 *, 0xC);
        sp28 = fparg0;
        sp2C = fparg1;
        func_001F3D80(&sp20, 0);
        M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | 1);
    }
}
