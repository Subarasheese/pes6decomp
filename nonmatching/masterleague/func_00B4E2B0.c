/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B4B920();                            /* extern */
M2C_UNK func_00B4DBA0();                            /* extern */
extern s32 D_003EAE94;

void func_00B4E2B0(void) {
    if (D_003EAE94 != 0) {
        func_00B4B920();
        func_00B4DBA0();
    }
}
