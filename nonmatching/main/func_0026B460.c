/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0026B460(void *arg0) {
    M2C_UNK (*temp_v0)(s32);

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        goto block_7;
    }
    if (M2C_FIELD(arg0, s32 (**)(s32), 4)(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        return 0;
    }
    temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 8);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(arg0, s32 *, 0xC));
    }
block_7:
    return 1;
}
