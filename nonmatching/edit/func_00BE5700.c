/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s16);                /* extern */
extern char D_00CE5BD8[];

void func_00BE5700(s16 arg0) {
    (*(s16 *)D_00CE5BD8) = arg0;
    func_00C1B440(0, arg0);
    func_00C1B440(1, arg0);
    func_00BF45D0(0, arg0, 0, 0, 0);
    func_00BE6F80();
    func_00B91590(0x1E, 1);
}
