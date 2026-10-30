/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00824010(void);
M2C_UNK func_0081D890(u32);                         /* extern */

void func_0081DBF0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_0081D890(func_00824010());
    }
}
