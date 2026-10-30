/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B30370();                            /* extern */
M2C_UNK func_00B308A0();                            /* extern */
extern s32 D_003EAE38;

void func_00B309C0(void) {
    if (D_003EAE38 != 0) {
        func_00B30370();
        func_00B308A0();
    }
}
