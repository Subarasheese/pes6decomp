/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B06560(void);
M2C_UNK func_009A8580();                            /* extern */
M2C_UNK func_009A85B0(M2C_UNK);                     /* extern */

void func_00B05FC0(void) {
    if (func_00B06560() != 0) {
        func_009A85B0(0x11);
        func_009A8580();
    }
}
