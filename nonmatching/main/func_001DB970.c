/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DB9C0();                            /* extern */
M2C_UNK func_001EC450(s32, f32);                    /* extern */

void func_001DB970(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
            return;
        }
        func_001DB9C0();
        func_001EC450(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x18));
    }
}
