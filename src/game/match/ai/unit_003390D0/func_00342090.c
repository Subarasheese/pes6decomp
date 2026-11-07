/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591C09[];
s32 func_0030F190(void);
s32 func_0030F1B0(void);
s32 func_00342050(void);
void func_003386B0(s32 (*)(void));

s32 func_00342090(void) {
    if (func_0030F190()) {
        if (func_0030F1B0() == 0 && D_00591C09[0] != 5) {
            func_003386B0(func_00342050);
            return 1;
        }
    }
    return 0;
}
