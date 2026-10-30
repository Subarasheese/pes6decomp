/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *D_003E7A08;

void func_00996060(void) {
    func_001C48E8(D_003E7A08 + 0x284, 0, 0x40);
    func_001C48E8(D_003E7A08 + 4, 0, 0x280);
    M2C_FIELD(D_003E7A08, s8 *, 0x2C4) = 0;
    M2C_FIELD(D_003E7A08, u8 *, 0x28D) = (u8) (M2C_FIELD(D_003E7A08, u8 *, 0x28D) | 2);
}
