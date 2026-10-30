/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B44DC0();                            /* extern */
M2C_UNK func_00B49020();                            /* extern */
extern s32 D_003EAE70;

void func_00B45C20(void) {
    if (D_003EAE70 != 0) {
        func_00B44DC0();
        func_00B49020();
    }
}
