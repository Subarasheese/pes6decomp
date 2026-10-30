/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

s32 func_003120D0(void **arg0, s32 arg1, s32 arg2) {
    if ((arg1 >= 0) && (arg2 >= 0) && (arg1 < 2)) {
        if (arg2 < 0x20) {
            *arg0 = (arg2 * 0x348) + (((void *)Pes6MatchSquads) + (arg1 * 0x6900)) + 0xF0;
            return 1;
        }
        goto block_6;
    }
block_6:
    *arg0 = NULL;
    return 0;
}
