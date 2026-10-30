/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001DF7B0(s32);                         /* extern */

s32 func_00C88AC0(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            func_001DF7B0(temp_a0);
        }
        func_00153FA0(arg0);
    }
    return 1;
}
