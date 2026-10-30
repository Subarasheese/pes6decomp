/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A9F0(void);
M2C_UNK func_009BEC00(s32);                         /* extern */

void func_00B085C0(s32 arg0) {
    if (func_00B0A9F0() != 0) {
        func_009BEC00(arg0);
    }
}
