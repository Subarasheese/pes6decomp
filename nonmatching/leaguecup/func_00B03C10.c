/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_003667A0();                            /* extern */
M2C_UNK func_00B04210();                            /* extern */
extern s32 D_003EAD58;

void func_00B03C10(void) {
    if (D_003EAD58 != 0) {
        func_00B04210();
        func_003667A0();
    }
}
