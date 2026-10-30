/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

s32 func_00B35B30(void **arg0, void **arg1) {
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = *arg0;
    temp_v1 = *arg1;
    var_v0 = (((u64) ((s64) M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94) - (((u64) ((s64) M2C_FIELD(((M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    return var_v0;
}
