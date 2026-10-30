/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D11AB0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xDA8);
        switch (temp_v1) {                          /* irregular */
        case 4:
            var_v1 = 0x15;
block_14:
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xD90) - var_v1;
            if (arg1 >= temp_v0) {
                M2C_FIELD(arg0, s32 *, 0xDB8) = (s32) (temp_v0 - 1);
            }
            if (arg1 >= 0) {
                M2C_FIELD(arg0, s32 *, 0xDB8) = arg1;
            } else {
                M2C_FIELD(arg0, s32 *, 0xDB8) = 0;
            }
            return 0;
        case 3:
            var_v1 = 4;
            goto block_14;
        case 2:
            var_v1 = 4;
            goto block_14;
        default:
            return 2;
        }
    } else {
        return 2;
    }
}
