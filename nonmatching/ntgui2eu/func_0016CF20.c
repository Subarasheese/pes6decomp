/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016D500(void *);                      /* extern */
extern M2C_UNK (*D_005C1458)();

s32 func_0016CF20(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        D_005C1458();
        func_0016D500(arg0);
    }
    return M2C_FIELD(arg0, s32 *, 0x97C);
}
