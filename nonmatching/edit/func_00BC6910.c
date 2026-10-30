/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE4EB4[];
extern char D_00CE4EC0[];

void func_00BC6910(s32 arg0) {
    (*(s32 *)D_00CE4EB4) = arg0;
    (*(s32 *)D_00CE4EC0) = 1;
}
