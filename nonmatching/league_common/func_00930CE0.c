/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00930CE0(s32 arg0) {
    s32 temp_a3;
    s32 var_v0;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_a3 = arg0 & 0xFFFF;
        if (temp_a3 < 0x400) {
            temp_v0_2 = (temp_a3 * 0x1A) + temp_v0;
            temp_a2 = M2C_FIELD(temp_v0_2, u8 *, 0x19B28);
            var_v0 = ((M2C_FIELD(temp_v0_2, u8 *, 0x19B28) / 5) + (temp_a2 >> 0x1F)) & 0xFF;
            if (((s32) temp_a2 % 5) != 0) {
                var_v0 = (var_v0 + 1) & 0xFF;
            }
            return var_v0;
        }
        return 0;
    }
    return 0;
}
