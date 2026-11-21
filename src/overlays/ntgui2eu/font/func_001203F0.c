/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_001203F0(s32 *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *arg0 + (arg1 * 0x1C);
    if (!(M2C_FIELD(temp_v1, s32 *, 4) & 1)) {
        return 1;
    }
    return M2C_FIELD(temp_v1, s32 *, 0x18) != 0;
}
