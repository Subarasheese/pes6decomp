/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
M2C_UNK func_00212E00(s32, s32);                    /* extern */

void func_009A4C90(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_009A84E0();
    if (temp_v0 != 0) {
        func_00212E00(M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 8), arg0);
    }
}
