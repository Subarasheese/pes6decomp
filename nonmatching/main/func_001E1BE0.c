/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001E1C80();                            /* extern */
M2C_UNK func_001EC390(s32, u8, s32, f32);           /* extern */

void func_001E1BE0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x78) != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x44) == 0) {
            return;
        }
        func_001E1C80();
        if (M2C_FIELD(arg0, u8 *, 0x79) != 0) {
            func_001EC390(M2C_FIELD(arg0, s32 *, 0x58), M2C_FIELD(arg0, u8 *, 0x77), M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, f32 *, 0x54));
        }
    }
}
