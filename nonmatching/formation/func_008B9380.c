/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B144E[];

s32 func_008B9380(s32 arg0) {
    return (arg0 & 0xFF) == ((*(s8 *)D_008B144E) & 1);
}
