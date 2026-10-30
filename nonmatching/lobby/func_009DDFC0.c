/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
extern void *D_00A7DEC8;

void func_009DDFC0(void) {
    if ((D_00A7DEC8 != NULL) && (M2C_FIELD(D_00A7DEC8, u8 *, 0x205) == 3)) {
        func_00213540(M2C_FIELD(D_00A7DEC8, s32 *, 0), 0);
        M2C_FIELD(D_00A7DEC8, u8 *, 0x205) = 0U;
    }
}
