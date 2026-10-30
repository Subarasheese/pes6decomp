/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00841AE0(s32 arg0) {
    s32 temp_v0;
    s32 var_a2;
    u16 temp_a0;
    void *temp_v1;

    temp_v0 = func_0082C2A0();
    if (arg0 == 0) {
        goto block_17;
    }
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u16 *, 0x79A8);
        if (temp_a0 == 0) {
            goto block_17;
        }
        var_a2 = 0;
loop_14:
        if ((var_a2 & 0xFFFF) < (s32) temp_a0) {
            temp_v1 = temp_v0 + 0x79A8 + ((var_a2 & 0xFFFF) * 0x84);
            if (arg0 != M2C_FIELD(temp_v1, s32 *, 0x38)) {
                var_a2 = (var_a2 + 1) & 0xFFFF;
                goto loop_14;
            }
            return temp_v1 + 4;
        }
        goto block_17;
    }
block_17:
    return 0;
}
