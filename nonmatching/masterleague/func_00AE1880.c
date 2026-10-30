/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BE2E0(u16, void *, void *, M2C_UNK); /* extern */
extern void *D_003EADA4;

void func_00AE1880(void) {
    if (D_003EADA4 != NULL) {
        func_009BE2E0(M2C_FIELD(((M2C_FIELD(D_003EADA4, s32 *, 0x3DBC) * 0x314) + D_003EADA4), u16 *, 0x128C), D_003EADA4 + 0xF44, D_003EADA4 + 0xF54, 3);
    }
}
