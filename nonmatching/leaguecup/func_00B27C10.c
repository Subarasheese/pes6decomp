/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B26A10();                            /* extern */
M2C_UNK func_00B27220();                            /* extern */
extern s32 D_003EAD94;

void func_00B27C10(void) {
    if (D_003EAD94 != 0) {
        func_00B26A10();
        func_00B27220();
    }
}
