/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B14CD[];

s32 func_0084A750(void) {
    if ((((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3A) >> 0x3F) == 0) && (((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3B) >> 0x3F) == 0)) {
        return 0;
    }
    return 1;
}
