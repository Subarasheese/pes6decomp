/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern char D_008A5F70[];

s32 func_00957B00(void) {
    if (func_0082C2A0() != 0) {
        if (((void *)D_008A5F70) != NULL) {
            return 4;
        }
        goto block_4;
    }
block_4:
    return 1;
}
