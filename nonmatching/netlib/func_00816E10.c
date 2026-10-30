/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3A20[];
extern char D_008A3A28[];
extern char D_008A3A50[];

s32 func_00816E10(void) {
    if ((*(s32 *)D_008A3A20) == 0) {
        return 1;
    }
    if ((((void *)D_008A3A50) == NULL) && ((*(s32 *)D_008A3A28) != 0)) {
        (*(s32 *)D_008A3A20) = 0;
    }
    return 0;
}
