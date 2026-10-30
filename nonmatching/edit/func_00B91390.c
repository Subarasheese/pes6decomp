/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B93260(s32);                         /* extern */

s32 func_00B91390(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_00B93260(M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
