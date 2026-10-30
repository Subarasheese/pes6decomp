/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FB300(M2C_UNK *);                   /* extern */
M2C_UNK func_008FC0C0(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA640;
extern char D_00921C98[];

void func_008FC920(void) {
    D_003EA640 = ((void *)D_00921C98);
    func_008FC0C0(((void *)D_00921C98));
    func_008FB300(((void *)D_00921C98));
}
