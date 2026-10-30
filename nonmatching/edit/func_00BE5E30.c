/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s16);                /* extern */
extern char D_00CE5BEA[];

void func_00BE5E30(s16 arg0) {
    (*(s16 *)D_00CE5BEA) = arg0;
    func_00C1B440(0, arg0);
    func_00C1B440(1, arg0);
    func_00B91590(0x1E, 1);
}
