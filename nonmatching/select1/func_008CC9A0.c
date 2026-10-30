/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CE1E0();                            /* extern */
M2C_UNK func_008CEB00();                            /* extern */
extern s32 D_003EA4D0;

void func_008CC9A0(void) {
    if (D_003EA4D0 != 0) {
        func_008CE1E0();
        func_008CEB00();
    }
}
