/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern f32 D_00520578[];

void func_001A5670(f32 value) {
    if (value < 200.0f) {
        D_00520578[0] = 200.0f;
    } else {
        D_00520578[0] = value;
    }
}
