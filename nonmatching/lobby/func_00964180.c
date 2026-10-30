/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A68C20[];

s8 *func_00964180(void) {
    if ((*(s8 *)D_00A68C20) == 0) {
        return NULL;
    }
    return ((void *)D_00A68C20);
}
