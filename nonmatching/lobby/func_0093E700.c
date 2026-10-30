/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_0093E700(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_s0;
    u32 *var_a0;
    void *temp_v0;
    void *temp_v1;

    var_s0 = 0;
    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a0 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        if ((u32) *var_a0 < 0x15U) {
            var_a1 = 0;
            do {
                temp_v1 = var_a0 + (arg0 * 0x168) + (var_a1 * 0x38);
                if ((((s32) (M2C_FIELD(temp_v1, u8 *, 0x41) & 2) >> 1) == arg1) && (M2C_FIELD(temp_v1, s32 *, 0xC) != 0)) {
                    var_s0 += 1;
                }
                var_a1 += 1;
            } while (var_a1 < 4);
            return var_s0;
        }
        return 0;
    }
    return 0;
}
