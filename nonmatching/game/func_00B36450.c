/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A5BB0(s32);
extern char D_00CBCAE4[];

s32 func_00B36450(void) {
    if ((*(s32 *)D_00CBCAE4) != 0xCD) {
        if (func_001A5BB0(5) == 0) {
            return 0;
        }
        goto block_3;
    }
block_3:
    return 1;
}
