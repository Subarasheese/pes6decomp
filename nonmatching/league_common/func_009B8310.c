/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B84D0(void);
M2C_UNK func_009B8150();                            /* extern */

void func_009B8310(void) {
    if (func_009B84D0() != 0) {
        func_009B8150();
    }
}
