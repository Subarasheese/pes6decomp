/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B1D060();                            /* extern */
M2C_UNK func_00B1DAA0();                            /* extern */
extern s32 D_003EAD88;

void func_00B1DF00(void) {
    if (D_003EAD88 != 0) {
        func_00B1D060();
        func_00B1DAA0();
    }
}
