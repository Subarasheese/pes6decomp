/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD40;

s32 func_009BFB80(void) {
    s32 temp_v1;

    if (D_00A7DD40 != NULL) {
        temp_v1 = M2C_FIELD(D_00A7DD40, s32 *, 0);
        if (temp_v1 != 3) {

        } else if (D_00A7DD40 != NULL) {
            if (temp_v1 != 1) {
                M2C_FIELD(D_00A7DD40, s8 *, 0x9E) = 1;
            }
            M2C_FIELD(D_00A7DD40, s32 *, 0) = 1;
        }
        return 0;
    }
    return 4;
}
