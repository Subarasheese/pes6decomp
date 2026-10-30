/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CA8810[];

void *func_00C822E0(s32 arg0) {
    return ((void *)D_00CA8810) + (arg0 * 4);
}
