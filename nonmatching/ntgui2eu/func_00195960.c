/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005CA9EC[];

s32 func_00195960(s32 arg0) {
    (*(s32 *)D_005CA9EC) = arg0;
    return 1;
}
