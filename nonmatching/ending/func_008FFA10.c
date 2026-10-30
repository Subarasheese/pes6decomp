/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s16 *D_003EA690;

s64 func_008FFA10(void) {
    if (D_003EA690 != NULL) {
        return (s64) ((((s16) *D_003EA690 >> 2) & 1) << 0x38) >> 0x38;
    }
    return -1;
}
