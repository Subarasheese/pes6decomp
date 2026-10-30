/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CF2760[];

void *func_00C1B3E0(s32 arg0) {
    return ((void *)D_00CF2760) + (arg0 * 0x7C) + 0x48;
}
