/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B67C50();                            /* extern */
M2C_UNK func_00B681C0();                            /* extern */
extern s32 D_003EAEE4;

void func_00B68780(void) {
    if (D_003EAEE4 != 0) {
        func_00B67C50();
        func_00B681C0();
    }
}
