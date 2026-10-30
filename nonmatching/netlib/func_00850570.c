/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1586[];
extern char D_008B1594[];

s8 func_00850570(s8 arg0) {
    (*(s32 *)D_008B1594) = 0;
    (*(s8 *)D_008B1586) = arg0;
    return arg0;
}
