/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0034A6C0(void);

s32 func_0034A8A0(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        M2C_FIELD(arg0, void (**)(void), 4) = func_0034A6C0;
        M2C_FIELD(arg0, s8 *, 8) = 0;
    }
    return 1;
}
