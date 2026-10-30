/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_006586AC[];
extern char D_0065876C[];

void func_00639D40(s32 arg0) {
    (*(s32 *)D_006586AC) = arg0;
    (*(s32 *)D_0065876C) = arg0;
}
