/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A8EF0(s32 arg0, s32 arg1) {
    return ((s64) (((arg0 - arg1) + 1) << 0x38) >> 0x38) & 0xFF;
}
