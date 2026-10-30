/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_00510FC8[];

void func_0017A328(void) {
    if (M2C_FIELD(((void *)D_00510FC8), M2C_UNK (**)(s32), 0) != NULL) {
        M2C_FIELD(((void *)D_00510FC8), M2C_UNK (**)(s32), 0)(M2C_FIELD(((void *)D_00510FC8), s32 *, 4));
    }
}
