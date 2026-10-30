/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00CEA010(M2C_UNK arg0, void *arg1) {
    M2C_UNK (*temp_v0)(void *);

    temp_v0 = M2C_FIELD(arg1, M2C_UNK (**)(void *), 8);
    if (temp_v0 != NULL) {
        temp_v0(arg1);
    }
    return 0;
}
