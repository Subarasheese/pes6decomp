/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 **Pes6Ball_Current;

s32 func_00901130(void) {
    **Pes6Ball_Current = 0;
    return 1;
}
