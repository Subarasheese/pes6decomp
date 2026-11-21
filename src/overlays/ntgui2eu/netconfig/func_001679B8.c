/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

s32 func_001679B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    if (!(M2C_FIELD(arg4, s32 *, 0x9C) != 0)) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg4, void **, 0x4C), s32(**)(void *), 0xBC)(arg4);
}
