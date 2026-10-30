/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090FD20(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0090FDA0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0091A7D0();                                /* extern */
extern char D_0091EFD0[];

void func_00902360(void) {
    func_0090FDA0(((void *)D_0091EFD0), 1);
    if (func_0091A7D0() != 0) {
        func_0090FD20(0xC, 0xA0053);
    }
}
