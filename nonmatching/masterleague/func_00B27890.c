/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
M2C_UNK func_00B277A0();                            /* extern */

void func_00B27890(void) {
    M2C_FIELD(func_00228960(), s32 *, 0x100) = 0;
    func_00B277A0();
}
