/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D39AA4[];
extern char D_00D39AAC[];

s32 func_00D19240(s32 *arg0, s32 *arg1) {
    *arg0 = (*(s32 *)D_00D39AA4);
    *arg1 = (*(s32 *)D_00D39AAC);
    return 0;
}
