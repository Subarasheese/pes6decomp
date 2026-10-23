/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0025E0B0(s32);
extern s32 func_0025E0E0(s32);

void func_00259DE0(void) {
    s32 state;

    state = func_0025E0E0(5) & 0xFF;
    if ((state > 0) && (state < 3)) {
        func_0025E0B0(5);
    }
}
