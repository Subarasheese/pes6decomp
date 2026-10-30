/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B75DE0();                            /* extern */
M2C_UNK func_00B76020();                            /* extern */
extern s32 D_003EAF00;

void func_00B76D50(void) {
    if (D_003EAF00 != 0) {
        func_00B76020();
        func_00B75DE0();
    }
}
