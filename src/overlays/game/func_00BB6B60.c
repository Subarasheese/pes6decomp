/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
void func_002871C0(f32 *v);
void func_00BB6B60(f32 *out, f32 x) {
    f32 v[4];
    f32 lo, y;
    func_002871C0(v);
    out[0] = v[0];
    lo = -300.0f;
    y = lo;
    if (x < lo) {
        y = lo + (lo - x);
        if (!(y <= -250.0f)) {
            y = -250.0f;
        }
    }
    out[1] = y;
    out[2] = v[2];
}
