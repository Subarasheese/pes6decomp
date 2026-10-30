/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008F71C0(M2C_UNK *);                   /* extern */
M2C_UNK func_008F7490(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA628;
extern char D_00921C30[];

void func_008F77F0(void) {
    D_003EA628 = ((void *)D_00921C30);
    func_008F7490(((void *)D_00921C30));
    func_008F71C0(((void *)D_00921C30));
}
