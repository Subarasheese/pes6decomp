/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern f32 D_00520630[];
extern f32 D_00520634[];

void func_001A47A0(f32 a, f32 b) {
    if (a < 0.0f) {
        D_00520630[0] = 0.0f;
    } else {
        D_00520630[0] = a;
    }
    if (b < 0.0f) {
        D_00520634[0] = 0.0f;
    } else {
        D_00520634[0] = b;
    }
}
