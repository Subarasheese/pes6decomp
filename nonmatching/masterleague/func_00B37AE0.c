/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B37340();                            /* extern */
M2C_UNK func_00B379C0();                            /* extern */
extern s32 D_003EAE5C;

void func_00B37AE0(void) {
    if (D_003EAE5C != 0) {
        func_00B37340();
        func_00B379C0();
    }
}
