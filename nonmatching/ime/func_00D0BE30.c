/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D376E8[];
extern char D_00D3772C[];
extern char D_00D37730[];

s32 func_00D0BE30(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    (*(s32 *)D_00D3772C) = arg1;
    (*(s32 *)D_00D37730) = arg0;
    return 1;
}
