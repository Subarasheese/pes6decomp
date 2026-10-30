/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_0099C7C0(s32 *);                       /* extern */
M2C_UNK func_009DEB20();                            /* extern */
extern s32 *D_00A7DEC8;

void func_009DE350(void) {
    if (D_00A7DEC8 != NULL) {
        func_00214290(*D_00A7DEC8);
        func_009DEB20();
        func_0099C7C0(D_00A7DEC8);
        D_00A7DEC8 = NULL;
    }
}
