/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00169F50(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, void *arg4) {
    if (M2C_FIELD(arg4, s32 *, 0x9C) != 0) {
        return M2C_FIELD(M2C_FIELD(arg4, void **, 0x4C), s32 (**)(void *), 0xBC)(arg4);
    }
    return 0;
}
