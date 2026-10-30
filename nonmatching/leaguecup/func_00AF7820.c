/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */

void func_00AF7820(void) {
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x29FAC), 0, M2C_FIELD(temp_v0, s32 *, 0x29DE8));
    }
}
