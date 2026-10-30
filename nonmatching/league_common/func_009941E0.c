/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00992160(M2C_UNK);                     /* extern */
M2C_UNK func_009939C0();                            /* extern */
extern s32 D_003EA980;

void func_009941E0(void) {
    if (D_003EA980 != 0) {
        func_009939C0();
        func_00992160(0);
    }
}
