/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9A00;
s32 func_00214540(s32);

s32 func_00213450(s32 x) {
    if (x != 0) {
        return func_00214540(x);
    }
    if (D_003E9A00 != 0) {
        return func_00214540(D_003E9A00);
    }
    return D_003E9A00 = func_00214540(0);
}
