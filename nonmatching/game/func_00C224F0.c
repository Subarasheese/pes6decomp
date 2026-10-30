/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 *D_003EA768;

s32 func_00C224F0(void) {
    if (D_003EA768 != NULL) {
        return ((s32) *D_003EA768 >> 1) & 1;
    }
    return 0;
}
