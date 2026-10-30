/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B28100();                            /* extern */
M2C_UNK func_00B28800();                            /* extern */
extern s32 D_003EAE2C;

void func_00B28A50(void) {
    if (D_003EAE2C != 0) {
        func_00B28100();
        func_00B28800();
    }
}
