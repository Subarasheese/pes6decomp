/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0026DA40(s32);
extern s32 func_0026E280(s32, s32, s32, s32);

s32 func_002D33E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (func_0026DA40(a1) != 0) {
        return 0;
    }
    return func_0026E280(a0, a1, a2, a3);
}
