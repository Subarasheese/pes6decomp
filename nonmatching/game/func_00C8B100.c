/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Word i of the 3-entry table D_00CCD054, 0 when i is out of range. */
extern char D_00CCD054[];

s32 func_00C8B100(s32 i) {
    if (i < 0) {
        return 0;
    }
    if (i >= 3) {
        return 0;
    }
    return ((s32 *)D_00CCD054)[i];
}
