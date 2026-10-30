/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D376E8[];
extern char D_00D3776D[];

s8 func_00D0F610(void) {
    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    return (*(s8 *)D_00D3776D);
}
