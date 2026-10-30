/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C13B90(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA7D8;
extern char D_00CCAF40[];
extern char D_00CCAF44[];

void func_00C18610(void) {
    D_003EA7D8 = ((void *)D_00CCAF40);
    func_001C48E8(((void *)D_00CCAF40), 0, 0x10);
    func_00C13B90(((void *)D_00CCAF44));
}
