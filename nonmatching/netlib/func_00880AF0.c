/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B2448[];
extern char D_008B2450[];
extern char D_008B2458[];

s32 func_00880AF0(void) {
    if ((*(s32 *)D_008B2448) != 0) {
        (*(s8 *)D_008B2450) = 1;
        (*(s8 *)D_008B2458) = 1;
        return 0;
    }
    return 1;
}
