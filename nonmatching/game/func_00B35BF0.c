/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

s32 func_00B35BF0(void **arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = *arg0;
    var_v0 = 0;
    if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1, u8 *, 0x12) * 0x6900))), u8 *, 0x92) << 0x3A) >> 0x3F) != 0) {
        var_v0 = 1;
    }
    return var_v0;
}
