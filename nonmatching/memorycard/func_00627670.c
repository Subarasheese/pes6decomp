/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 *func_006247C0();                               /* extern */

s16 func_00627670(s32 arg0) {
    s64 var_a2;
    u16 *temp_v0;
    u16 *var_a1;

    if (arg0 == 0) {
        goto block_13;
    }
    temp_v0 = func_006247C0();
    if (temp_v0 != NULL) {
        var_a2 = 0;
        if (*temp_v0 != 0xFFFF) {
            var_a1 = temp_v0;
loop_8:
            if (arg0 != *var_a1) {
                var_a1 += 6;
                var_a2 = (s64) ((var_a2 + 1) << 0x30) >> 0x30;
                if (*var_a1 == 0xFFFF) {
                    goto block_13;
                }
                goto loop_8;
            }
            return M2C_FIELD(((((s64) (var_a2 << 0x30) >> 0x30) * 6) + temp_v0), s16 *, 4);
        }
        goto block_13;
    }
block_13:
    return 0;
}
