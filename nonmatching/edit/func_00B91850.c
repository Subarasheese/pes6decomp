/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B8FA90(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B8FB70();                            /* extern */

void func_00B91850(s32 arg0) {
    if (arg0 != 0) {
        func_00B8FB70();
        func_00B8FA90(arg0, 0x10);
    }
}
