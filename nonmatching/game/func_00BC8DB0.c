/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD5D0[];

void *func_00BC8DB0(s32 arg0) {
    return ((void *)D_00CBD5D0) + (arg0 * 0x3C) + 0x14;
}
