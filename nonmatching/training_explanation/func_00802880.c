/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C6F940(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00CDA920();                            /* extern */
extern char D_00808008[];
extern char D_0080800C[];

void func_00802880(void) {
    func_00CDA920();
    (*(s32 *)D_00808008) = 0;
    (*(s32 *)D_0080800C) = 0;
    func_00C6F940(0, 0);
}
