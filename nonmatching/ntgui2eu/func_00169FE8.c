/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00168DC8(void *);                      /* extern */
extern M2C_UNK (*D_005BFABC)();

s32 func_00169FE8(void *arg0) {
    D_005BFABC();
    func_00168DC8(arg0);
    M2C_FIELD(arg0, s32 *, 0xA8) = 1;
    return 1;
}
