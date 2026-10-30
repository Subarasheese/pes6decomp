/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0044DFF4[];

void *func_00110400(s32 arg0) {
    return ((void *)D_0044DFF4) + (arg0 << 8);
}
