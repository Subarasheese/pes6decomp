/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

s32 func_00311C50(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        return 0;
    }
    if ((arg1 >= 0) && (arg0 < 2)) {
        if (arg1 < 0x20) {
            return M2C_FIELD(((arg1 * 0x348) + (((void *)Pes6MatchSquads) + (arg0 * 0x6900))), u8 *, 0xCF) & 1;
        }
        goto block_8;
    }
block_8:
    return 0;
}
