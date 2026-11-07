/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

f32 func_00CECD00(f32 *arg0, f32 fparg0, f32 fparg1) {
    f32 d;
    s32 v;

    d = *arg0 - fparg0;
    v = (s32)d;
    v = (v > 0) ? v : -v;
    if (!((f32)v <= (fparg1 - 1.0f))) {
        *arg0 -= d / fparg1;
    } else {
        *arg0 = fparg0;
    }
    return *arg0;
}
