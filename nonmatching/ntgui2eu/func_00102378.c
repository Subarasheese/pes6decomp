/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_01145EA0[];

void *func_00102378(s32 arg0) {
    return ((void *)D_01145EA0) + (arg0 << 0xC);
}
