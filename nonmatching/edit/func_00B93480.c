/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB4020[];

void *func_00B93480(s32 arg0) {
    return ((void *)D_00CB4020) + (arg0 * 0x3C);
}
