/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7BA0(void *);
extern void *D_00A7D758;

void func_009860F0(void) {
    if ((func_001D7BA0(M2C_FIELD(D_00A7D758, void **, 0xC)) != 2) && (func_001D7BA0(M2C_FIELD(D_00A7D758, void **, 4)) != 2) && (func_001D7BA0(M2C_FIELD(D_00A7D758, void **, 8)) != 2)) {
        if (M2C_FIELD(D_00A7D758, s32 *, 0x18) != 0) {
            M2C_FIELD(D_00A7D758, s16 *, 0x28) = 0x3C;
            M2C_FIELD(D_00A7D758, u8 *, 0x1C) = (u8) (M2C_FIELD(D_00A7D758, u8 *, 0x1C) + 1);
        } else {
            M2C_FIELD(D_00A7D758, u8 *, 0x1C) = 0xBU;
        }
    }
}
