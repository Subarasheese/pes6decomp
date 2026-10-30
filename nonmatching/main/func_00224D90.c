/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_002260F0();                                /* extern */

u16 func_00224D90(M2C_UNK arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = func_002260F0();
    if (func_00231240() == 1) {
        return 0U;
    }
    if (temp_s0 != 0) {
        temp_v1 = arg1 & 0xFF;
        if (temp_v1 < 0x20) {
            return M2C_FIELD(((temp_v1 * 0x16) + temp_s0), u16 *, 0x1E4);
        }
        return 0U;
    }
    return 0U;
}
