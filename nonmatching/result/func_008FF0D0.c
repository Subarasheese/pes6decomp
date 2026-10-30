/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FEA10(M2C_UNK *);                   /* extern */
M2C_UNK func_008FED90(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA64C;
extern char D_00921D38[];

void func_008FF0D0(void) {
    D_003EA64C = ((void *)D_00921D38);
    func_008FED90(((void *)D_00921D38));
    func_008FEA10(((void *)D_00921D38));
}
