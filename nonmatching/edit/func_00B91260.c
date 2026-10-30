/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CB3EC0[];
extern char D_00CDF8F0[];
extern char D_00CDF9E8[];

void func_00B91260(void) {
    func_001C48E8(((void *)D_00CDF8F0), 0, 0x10C);
    func_001C4730(((void *)D_00CDF9E8), ((void *)D_00CB3EC0), 0x10);
}
