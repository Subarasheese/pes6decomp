/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3390[];

s32 func_008146B0(void) {
    if (((void *)D_008A3390) != NULL) {
        (*(s8 *)D_008A3390) = 1;
        return 1;
    }
    return 0;
}
