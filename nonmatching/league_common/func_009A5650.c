/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
M2C_UNK func_009A7880(s32);                         /* extern */

void func_009A5650(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_009A84E0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 4);
        if (temp_a0 != 0) {
            func_009A7880(temp_a0);
        }
    }
}
