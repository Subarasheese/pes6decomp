/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B06560(void);
s32 func_0095F420(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00B06050(void) {
    s32 sp2C;
    u32 temp_v0;

    if (func_00B06560() != 0) {
        sp2C = 0x0104001A;
        temp_v0 = func_00B06560();
        if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s32 *, 0x28) == 0)) {
            M2C_FIELD(temp_v0, s32 *, 0x28) = func_0095F420(&sp2C, 1, 0, 0);
        }
    }
}
