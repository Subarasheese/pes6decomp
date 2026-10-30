/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68CA8;

s32 func_00969B90(void) {
    s32 var_v0;
    s32 var_v0_2;

    if (D_00A68CA8 != NULL) {
        if (D_00A68CA8 == NULL) {
            var_v0 = 0;
        } else {
            var_v0 = M2C_FIELD(D_00A68CA8, s32 *, 0x180);
        }
        if (var_v0 != 0) {
            return 1;
        }
        if (D_00A68CA8 == NULL) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = M2C_FIELD(D_00A68CA8, s32 *, 0x184);
        }
        if (var_v0_2 != 0) {
            return 1;
        }
        goto block_14;
    }
block_14:
    return 0;
}
