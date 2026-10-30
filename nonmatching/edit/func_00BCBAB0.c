/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCBAB0(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_a2;

    temp_a2 = arg0 + 0x34;
    temp_a0 = arg1 + 0x34;
    if ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x61) << 0x38) >> 0x3C) == ((u64) ((s64) M2C_FIELD(arg1, u8 *, 0x61) << 0x38) >> 0x3C)) && (((u64) ((s64) M2C_FIELD(temp_a2, u8 *, 0x2F) << 0x39) >> 0x3E) == ((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x2F) << 0x39) >> 0x3E))) {
        if (((u64) ((s64) M2C_FIELD(temp_a2, u8 *, 0x34) << 0x39) >> 0x3F) == ((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x34) << 0x39) >> 0x3F)) {
            return 0;
        }
        goto block_5;
    }
block_5:
    return 1;
}
