/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00134440(u8 *ring, u8 **out) {
    s32 count = M2C_FIELD(ring, s32 *, 0x50008) - M2C_FIELD(ring, s32 *, 0x50004);

    if (count != 0) {
        *out = ring + M2C_FIELD(ring, s32 *, 0x50000);
    }
    return count;
}
