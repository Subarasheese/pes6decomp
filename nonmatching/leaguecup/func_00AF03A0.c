/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AF1B80();                            /* extern */
M2C_UNK func_00AF3180();                            /* extern */
extern s32 D_003EAD44;

void func_00AF03A0(void) {
    if (D_003EAD44 != 0) {
        func_00AF3180();
        func_00AF1B80();
    }
}
