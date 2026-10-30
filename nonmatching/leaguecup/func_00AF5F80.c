/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF5740(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00AF5A70();                            /* extern */
M2C_UNK func_00AF5CA0();                            /* extern */

void func_00AF5F80(void) {
    u32 temp_v0;

    temp_v0 = func_00AF5740();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(M2C_FIELD(temp_v0, s32 *, 0x5C));
        func_00AF5CA0();
        func_00AF5A70();
    }
}
