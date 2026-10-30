/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A35D8[];
extern char D_008A35E0[];

s32 func_00814E50(void) {
    if ((*(s32 *)D_008A35E0) == 0) {
        return 1;
    }
    (*(s32 *)D_008A35D8) = 0;
    return 0;
}
