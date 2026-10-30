/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008ECA00[];

void *func_008B3030(s32 arg0) {
    return ((void *)D_008ECA00) + (arg0 * 8);
}
