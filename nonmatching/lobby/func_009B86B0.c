/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B8F80(void *);                      /* extern */
extern void *D_00A7DC10;

s32 func_009B86B0(s64 arg0) {
    if (D_00A7DC10 != NULL) {
        if (M2C_FIELD(D_00A7DC10, s8 *, 0x60) != ((s64) (arg0 << 0x38) >> 0x38)) {
            M2C_FIELD(D_00A7DC10, s8 *, 0x60) = (s8) arg0;
            M2C_FIELD(D_00A7DC10, s8 *, 0x62) = 1;
            func_009B8F80(D_00A7DC10);
        }
        return 0;
    }
    return 4;
}
