/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008CEA40();                                /* extern */
extern void *D_003EA4D0;

s32 func_008CC9D0(void) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = D_003EA4D0;
    if (temp_s0 == NULL) {
        goto block_7;
    }
    if (func_008CEA40() == 1) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0xE0);
        if (temp_v1 == 2) {
            return 1;
        }
        if (temp_v1 == 0) {
            return -1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
