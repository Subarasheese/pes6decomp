/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A5F70[];

s32 func_00932010(void) {
    switch ((*(s16 *)D_008A5F70)) {                           /* irregular */
    case 39:
        return 5;
    case 19:
        return 8;
    case 24:
        return 3;
    case 38:
        return 5;
    default:
        return 1;
    }
}
