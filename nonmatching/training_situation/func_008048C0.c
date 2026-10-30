/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CE9B90();                            /* extern */
extern s32 D_003EB2F8;

void func_008048C0(void) {
    if (D_003EB2F8 != 0) {
        func_00CE9B90();
        D_003EB2F8 = 0;
    }
}
