/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CDF8F4[];

void func_00B90D50(void) {
    func_001C48E8(((void *)D_00CDF8F4), 0, 0xF0);
    M2C_FIELD(((void *)D_00CDF8F4), s32 *, 0xE4) = 0x41000000;
}
