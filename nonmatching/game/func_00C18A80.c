/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C13B90(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA7DC;
extern char D_00CCAF50[];
extern char D_00CCAF64[];

void func_00C18A80(void) {
    D_003EA7DC = ((void *)D_00CCAF50);
    func_001C48E8(((void *)D_00CCAF50), 0, 0x20);
    func_00C13B90(((void *)D_00CCAF64));
}
