/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD550[];

s32 func_00C8C970(s32 arg0, s32 arg1) {
    s32 *temp_a2;

    temp_a2 = ((void *)D_00CCD550) + (arg0 * 4);
    *temp_a2 |= 1 << arg1;
    return 0;
}
