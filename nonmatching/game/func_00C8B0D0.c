/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Word i of the 3-entry table D_00CCD048; an out-of-range i uses entry 0. */
extern char D_00CCD048[];

s32 func_00C8B0D0(s32 i) {
    if (i < 0 || i >= 3) {
        i = 0;
    }
    return ((s32 *)D_00CCD048)[i];
}
