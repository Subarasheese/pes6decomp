/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AE40D0(s32);                         /* extern */
extern void *D_00B00C30;

s32 func_00AE2CB0(void) {
    func_00AE40D0(M2C_FIELD(D_00B00C30, s32 *, 0x20));
    M2C_FIELD(D_00B00C30, s32 *, 0x20) = 0;
    return 1;
}
