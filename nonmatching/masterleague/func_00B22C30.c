/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B22870();                            /* extern */
M2C_UNK func_00B229C0();                            /* extern */
extern s32 D_003EAE20;

void func_00B22C30(void) {
    if (D_003EAE20 != 0) {
        func_00B22870();
        func_00B229C0();
    }
}
