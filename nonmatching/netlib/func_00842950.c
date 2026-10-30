/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A9844[];

s32 func_00842950(s64 arg0) {
    (*(s32 *)D_008A9844) = (s32) ((s64) (arg0 << 0x38) >> 0x38);
    return 1;
}
