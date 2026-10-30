/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAEE8;

s32 func_00B69200(s32 arg0) {
    s32 temp_v1;
    s32 var_a1;
    void *var_v1;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 < 0x20) {
        if (D_003EAEE8 != 0) {
            var_a1 = 0;
            var_v1 = D_003EAEE8 + (temp_v1 * 0x198) + 0xC;
loop_9:
            if (M2C_FIELD(var_v1, s16 *, 4) == 0) {
                var_a1 += 1;
                var_v1 += 0x10;
                if (var_a1 >= 0x17) {
                    return 1;
                }
                goto loop_9;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
