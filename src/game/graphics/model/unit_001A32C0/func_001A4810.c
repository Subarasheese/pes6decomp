/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern f32 D_00520628[];
extern f32 D_0052062C[];

void func_001A4810(f32 a, f32 b) {
    if (a < 0.0f) {
        D_00520628[0] = 0.0f;
    } else {
        D_00520628[0] = a;
    }
    if (b < 0.0f) {
        D_0052062C[0] = 0.0f;
    } else {
        D_0052062C[0] = b;
    }
}
