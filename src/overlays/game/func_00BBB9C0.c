/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

/* scale * sin(angle) >> 12, from the 512-entry s16 sine table at D_00CB16C0. */
extern char D_00CB16C0[];

s32 func_00BBB9C0(s32 angle, s32 scale) {
    return (scale * ((s16 *)D_00CB16C0)[(angle & 0xFFFF) >> 7]) >> 12;
}
