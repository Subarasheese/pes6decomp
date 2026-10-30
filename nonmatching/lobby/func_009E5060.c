/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E3D80(s32, s32);                    /* extern */
extern void *D_00A7DF10;

s32 func_009E5060(s32 arg0) {
    if (D_00A7DF10 == NULL) {
        return 0;
    }
    func_009E3D80(M2C_FIELD(D_00A7DF10, s32 *, 0x14), arg0);
    return 1;
}
