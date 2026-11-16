/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00399500[];
extern char D_00399504[];
extern char D_00399508[];

f32 func_001F6F60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 tbl[4];
    tbl[0] = *(f32 *)D_00399500;
    tbl[1] = *(f32 *)D_00399504;
    tbl[2] = *(f32 *)D_00399508;
    if (arg0 == 0) {
        return 0.0f;
    }
    return ((f32 (*)(s32, s32, s32, s32)) ((u32 *) tbl)[arg2])(arg0, arg1, arg2, arg3);
}
