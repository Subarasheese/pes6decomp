/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B40030();                            /* extern */
M2C_UNK func_00B42C80();                            /* extern */
extern s32 D_003EAE6C;

void func_00B44980(void) {
    if (D_003EAE6C != 0) {
        func_00B40030();
        func_00B42C80();
    }
}
