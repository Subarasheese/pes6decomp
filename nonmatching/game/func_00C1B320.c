/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3480(f32, f32);                        /* extern */
M2C_UNK func_00AA5D60(void *, s32, u16);            /* extern */

void func_00C1B320(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x66) = 3;
    func_00AA5D60(arg0, func_009B3480(M2C_FIELD(arg0, f32 *, 0x6C), M2C_FIELD(arg0, f32 *, 0x70)), M2C_FIELD(arg0, u16 *, 0xA8));
}
