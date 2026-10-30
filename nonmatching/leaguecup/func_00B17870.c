/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B19610();                            /* extern */
M2C_UNK func_00B198E0();                            /* extern */
extern s32 D_003EAD78;

void func_00B17870(void) {
    if (D_003EAD78 != 0) {
        func_00B198E0();
        func_00B19610();
    }
}
