/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099AF50(s32, M2C_UNK, M2C_UNK);           /* extern */

void func_009EA9E0(void *arg0, s32 arg1) {
    s32 *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 **, 4);
    *M2C_FIELD(((arg1 * 0x14) + temp_s0), s32 **, 4) = func_0099AF50(*temp_s0, 2, 1);
}
