/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A600C[];

s8 *func_00827AD0(void) {
    if ((*(s8 *)D_008A600C) == 0) {
        return NULL;
    }
    return ((void *)D_008A600C);
}
