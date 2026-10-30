/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C13B90(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA7C8;
extern char D_00CCAD60[];
extern char D_00CCAD64[];

void func_00C150D0(void) {
    D_003EA7C8 = ((void *)D_00CCAD60);
    func_001C48E8(((void *)D_00CCAD60), 0, 0x10);
    func_00C13B90(((void *)D_00CCAD64));
}
