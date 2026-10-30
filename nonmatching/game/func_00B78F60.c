/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00915000(M2C_UNK);                     /* extern */
M2C_UNK func_0092A540();                            /* extern */
M2C_UNK func_0096BA80();                            /* extern */
extern char D_00CBBE50[];

void func_00B78F60(void) {
    func_0092A540();
    func_00915000(3);
    func_0096BA80();
    (*(u8 *)D_00CBBE50) = ((*(u8 *)D_00CBBE50) & ~1) | (0 & 1);
}
