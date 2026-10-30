/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CA8F10[];
extern char D_00CCD948[];
extern void *D_00CCD94C;

void func_00C94440(s32 arg0) {
    (*(s32 *)D_00CCD948) = arg0;
    D_00CCD94C = ((void *)D_00CA8F10) + (arg0 * 0xC) + 4;
}
