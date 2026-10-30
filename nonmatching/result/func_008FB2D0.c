/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FACF0(M2C_UNK *);                   /* extern */
M2C_UNK func_008FAEE0(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA63C;
extern char D_00921C88[];

void func_008FB2D0(void) {
    D_003EA63C = ((void *)D_00921C88);
    func_008FACF0(((void *)D_00921C88));
    func_008FAEE0(((void *)D_00921C88));
}
