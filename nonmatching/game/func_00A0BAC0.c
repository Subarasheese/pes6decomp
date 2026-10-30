/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A0BAC0(void *arg0) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (((u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 0xD) << 0x38) >> 0x39) != 1) {
        temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
        if ((temp_v1 != 0xC1) && (temp_v1 != 0xC8)) {
            return 0;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
