/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B73680();                            /* extern */
M2C_UNK func_00B73B40();                            /* extern */
extern s32 D_003EAF08;

void func_00B77260(void) {
    if (D_003EAF08 != 0) {
        func_00B73B40();
        func_00B73680();
    }
}
