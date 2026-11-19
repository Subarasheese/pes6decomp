/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

/* Word i of the 0x7F-entry table D_00CCCE4C; an out-of-range i (unsigned compare) uses entry 0. */
extern char D_00CCCE4C[];

s32 func_00C8B190(u32 i) {
    if (i >= 0x7F) {
        i = 0;
    }
    return ((s32 *)D_00CCCE4C)[i];
}
