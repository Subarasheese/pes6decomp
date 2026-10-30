/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 *D_00A7DC38;

s32 func_009B9E20(void) {
    if (D_00A7DC38 != NULL) {
        if ((s32) *D_00A7DC38 >= 2) {
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
