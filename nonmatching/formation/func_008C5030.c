/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008EBE20[];

void *func_008C5030(s32 arg0) {
    return ((void *)D_008EBE20) + (arg0 * 8);
}
