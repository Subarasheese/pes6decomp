/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B02B70[];
extern char D_00B02B7C[];

s32 func_00AEC970(void) {
    if (((u64) ((s64) (*(u8 *)D_00B02B7C) << 0x3E) >> 0x3F) != 0) {
        (*(s32 *)D_00B02B70) = 0;
    }
    return 1;
}
