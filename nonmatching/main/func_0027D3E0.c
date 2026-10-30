/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0027D3E0(void *arg0) {
    u64 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) != 0x314) {
        temp_v1 = (u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
        if ((temp_v1 != 8) && (temp_v1 != 7) && (temp_v1 != 6)) {
            return 0;
        }
        return 1;
    }
    return 1;
}
