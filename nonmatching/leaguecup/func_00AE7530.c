/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AE6100();                            /* extern */
M2C_UNK func_00AE7110();                            /* extern */
extern s32 D_003EAD3C;

void func_00AE7530(void) {
    if (D_003EAD3C != 0) {
        func_00AE6100();
        func_00AE7110();
    }
}
