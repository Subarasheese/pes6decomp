/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3A20[];
extern char D_008A3A28[];

s32 func_00816CB0(void) {
    if ((*(s32 *)D_008A3A28) == 0) {
        return 1;
    }
    (*(s32 *)D_008A3A20) = 0;
    return 0;
}
