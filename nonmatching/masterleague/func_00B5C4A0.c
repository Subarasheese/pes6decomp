/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
s32 func_00B5C4A0(void) {
    u32 temp_v0;
    u8 temp_a0;
    u8 var_v1;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x62A) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x62B);
            switch (temp_a0) {                      /* irregular */
            case 0:
                var_v1 = 9;
block_14:
                M2C_FIELD(temp_v0, u8 *, 0x62A) = var_v1;
                break;
            case 1:
                M2C_FIELD(temp_v0, u8 *, 0x62B) = 0U;
                var_v1 = 6;
                goto block_14;
            }
        }
    }
    return 0;
}
