/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

void func_001DF030(s32 a0, f32 *out);
void func_001DF510(s32 a0, f32 a, f32 b);
f32 func_001E4E30(s32 a0);
void func_001DF370(s32 a0, s32 a1);

s32 func_001B6E40(s32 a0, s32 a1) {
    f32 v[4];
    f32 d;
    func_001DF030(a0, v);
    func_001DF510(a0, 3.4028234663852886e+38f, 3.4028234663852886e+38f);
    d = func_001E4E30(a0);
    func_001DF510(a0, v[2], v[3]);
    if (!(d <= v[2])) {
        a1 = 16;
    }
    func_001DF370(a0, a1);
    return a1;
}
