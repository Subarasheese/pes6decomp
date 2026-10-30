/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CC320(void *);                      /* extern */

void func_008CAD30(void *arg0) {
    M2C_UNK (*temp_v0)(s32);

    temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x110);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(arg0, s32 *, 0x114));
    }
    func_008CC320(arg0);
}
