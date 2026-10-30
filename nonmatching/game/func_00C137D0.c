/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C137D0(s32 arg0) {
    return ((void *)D_00CBFAA0) + (arg0 * 4);
}
