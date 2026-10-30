/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C08B0(void *);                      /* extern */
extern void *D_00A7DD40;

s32 func_009BFC30(s64 arg0) {
    if (D_00A7DD40 != NULL) {
        if (M2C_FIELD(D_00A7DD40, s8 *, 0x9C) != ((s64) (arg0 << 0x38) >> 0x38)) {
            M2C_FIELD(D_00A7DD40, s8 *, 0x9C) = (s8) arg0;
            M2C_FIELD(D_00A7DD40, s8 *, 0x9E) = 1;
            func_009C08B0(D_00A7DD40);
        }
        return 0;
    }
    return 4;
}
