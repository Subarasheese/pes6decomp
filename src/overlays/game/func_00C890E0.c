/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern f32 func_001E4E30(s32);
extern s32 D_00CCD048[];

f32 func_00C890E0(s32 arg0) {
    f32 r = 0.0f;
    if (arg0 < 3) {
        r = func_001E4E30(D_00CCD048[arg0]);
    }
    return r;
}
