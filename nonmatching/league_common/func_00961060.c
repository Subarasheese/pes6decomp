/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0093D6F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0096D6B0();                            /* extern */
extern void *D_003E7B0C;

void func_00961060(void) {
    M2C_FIELD(D_003E7B0C, u8 *, 0x2E) = (u8) M2C_FIELD(D_003E7B0C, u8 *, 0x26);
    func_0096D6B0();
    func_0093D6F0(1, 3);
}
