/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00C84530();                            /* extern */

void func_00C820A0(void) {
    if (func_002DCA30() != 0) {
        func_00C84530();
    }
}
