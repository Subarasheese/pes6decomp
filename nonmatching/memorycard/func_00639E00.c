/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00658930[];

void *func_00639E00(s32 arg0) {
    return ((void *)D_00658930) + (arg0 << 5);
}
