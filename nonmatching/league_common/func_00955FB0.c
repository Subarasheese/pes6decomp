/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6590(void);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
extern s32 D_003EA8D8;
extern s32 D_003EA8DC;

void func_00955FB0(void) {
    D_003EA8D8 = 0;
    D_003EA8DC = 0;
    func_001B6590();
    func_001B6460(0);
}
