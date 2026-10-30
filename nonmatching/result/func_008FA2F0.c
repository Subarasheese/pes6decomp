/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008F84F0(M2C_UNK *);                   /* extern */
M2C_UNK func_008F9CC0(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA634;
extern char D_00921C70[];

void func_008FA2F0(void) {
    D_003EA634 = ((void *)D_00921C70);
    func_008F9CC0(((void *)D_00921C70));
    func_008F84F0(((void *)D_00921C70));
}
