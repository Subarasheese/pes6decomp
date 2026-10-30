/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A43F0[];

void *func_008216D0(s32 arg0) {
    if (arg0 < 0) {
        return NULL;
    }
    if (arg0 >= 8) {
        return NULL;
    }
    if (((void *)D_008A43F0) != NULL) {
        return ((void *)D_008A43F0) + (arg0 * 0x32) + 0x281;
    }
    return NULL;
}
