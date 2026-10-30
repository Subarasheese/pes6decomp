/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3A38[];
extern char D_008A3A40[];

s32 func_00816E80(void) {
    (*(s8 *)D_008A3A38) = 0;
    (*(s8 *)D_008A3A40) = 0;
    return 1;
}
