/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009E04B0(s32);                         /* extern */
extern void *D_00A7DEE8;

s32 func_009E0D60(s32 arg0) {
    void *temp_v0;

    if (D_00A7DEE8 != NULL) {
        return 0;
    }
    temp_v0 = func_0099C7E0(0x40);
    D_00A7DEE8 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_v0, s8 *, 0x3A) = 1;
    func_009E04B0(arg0);
    return 1;
}
