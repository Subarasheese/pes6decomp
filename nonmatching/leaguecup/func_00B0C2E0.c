/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

s32 func_00B0C2E0(s32 arg0) {
    s32 var_v0;
    u8 temp_a1;

    if (D_003EAD68 != NULL) {
        temp_a1 = M2C_FIELD(D_003EAD68, u8 *, 0xE05);
        var_v0 = 0;
        if ((s32) temp_a1 > 0) {
loop_6:
            if ((arg0 & 0xFFFF) != M2C_FIELD((D_003EAD68 + ((var_v0 & 0xFF) * 2)), u16 *, 0x1380)) {
                var_v0 = (var_v0 + 1) & 0xFF;
                if (var_v0 >= (s32) temp_a1) {
                    goto block_11;
                }
                goto loop_6;
            }
            return var_v0;
        }
block_11:
        return 0xFF;
    }
    return 0;
}
