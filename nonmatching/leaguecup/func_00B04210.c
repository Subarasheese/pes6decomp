/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B03A80(void);
M2C_UNK func_00B04060();                            /* extern */

void func_00B04210(void) {
    if (func_00B03A80() != 0) {
        func_00B04060();
    }
}
