/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DF08;

s32 func_009E4B40(void) {
    u8 temp_a0;

    if (D_00A7DF08 != NULL) {
        if (M2C_FIELD(D_00A7DF08, s32 *, 0x120) != 0) {
            temp_a0 = M2C_FIELD(D_00A7DF08, u8 *, 0x11D);
            if (temp_a0 != 1) {
                return 0xA;
            }
            return (0xD - (temp_a0 * 9)) & 0xFF;
        }
        return 1;
    }
    return 0;
}
