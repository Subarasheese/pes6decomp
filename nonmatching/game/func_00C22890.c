/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u16 *D_003EA764;

s64 func_00C22890(void) {
    if (D_003EA764 != NULL) {
        return (s64) ((((s32) *D_003EA764 >> 7) & 1) << 0x38) >> 0x38;
    }
    return -1;
}
