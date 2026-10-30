/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002E8BD0(void);
M2C_UNK func_00636F50();                            /* extern */

void func_00636F20(void) {
    if (func_002E8BD0() == 0x16) {
        func_00636F50();
    }
}
