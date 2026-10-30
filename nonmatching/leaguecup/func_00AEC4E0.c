/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B10D20(void);
u8 func_00AEC4E0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B10D20();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x78);
        switch (temp_a0) {                          /* irregular */
        case 2:
            return M2C_FIELD(temp_v0, u8 *, 0x74);
        case 1:
            /* fallthrough */
        default:
            return 0U;
        }
    } else {
        return 1U;
    }
}
