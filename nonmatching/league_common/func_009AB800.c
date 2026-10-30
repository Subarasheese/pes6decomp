/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009AADC0();                            /* extern */
M2C_UNK func_009AB0A0();                            /* extern */
extern s32 D_003EA9A4;

void func_009AB800(void) {
    if (D_003EA9A4 != 0) {
        func_009AB0A0();
        func_009AADC0();
    }
}
