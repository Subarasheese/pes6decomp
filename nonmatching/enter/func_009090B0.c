/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0090D980();                            /* extern */
extern char D_0092F0A0[];

void func_009090B0(void) {
    func_001C48E8(((void *)D_0092F0A0), 0, 0x1BC);
    func_0090D980();
}
