/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B1EAB0();                            /* extern */
M2C_UNK func_00B1F540();                            /* extern */
extern s32 D_003EAD8C;

void func_00B1E300(void) {
    if (D_003EAD8C != 0) {
        func_00B1F540();
        func_00B1EAB0();
    }
}
