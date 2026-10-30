/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00230410();                                /* extern */

s32 func_0094B510(void) {
    s32 var_s1;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        var_s1 = 0;
loop_4:
        if (func_00230410() != 1) {
            temp_a0 = temp_v0 + ((var_s1 & 0xFFFF) * 0x1A);
            if ((M2C_FIELD(temp_a0, u16 *, 0x19B20) == 0) && (M2C_FIELD(temp_a0, u8 *, 0x19B22) == 0xFF)) {
                return var_s1;
            }
            goto block_12;
        }
        if (M2C_FIELD((temp_v0 + ((var_s1 & 0xFFFF) * 0x1A)), u16 *, 0x19B20) == 0) {
            return var_s1;
        }
block_12:
        var_s1 = (var_s1 + 1) & 0xFFFF;
        if (var_s1 >= 0x400) {
            goto block_13;
        }
        goto loop_4;
    }
block_13:
    return 0x400;
}
