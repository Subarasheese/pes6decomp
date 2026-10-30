/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011F738(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_011D40C0[];

void func_001200C0(void) {
    func_0011F738(((void *)D_011D40C0), 0x14, 0x14);
    func_0011F738(((void *)D_011D40C0) + 0x14, 0x14, 0x14);
}
