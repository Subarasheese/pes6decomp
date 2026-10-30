/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AECE40(s32);                         /* extern */
extern void *D_00B02688;

s32 func_00AE7850(void) {
    s32 *temp_s0;
    s32 temp_a0;

    temp_a0 = M2C_FIELD(D_00B02688, s32 *, 0x13D4);
    temp_s0 = D_00B02688 + 0x13D4;
    if (temp_a0 != 0) {
        func_00AECE40(temp_a0);
        *temp_s0 = 0;
    }
    return 1;
}
