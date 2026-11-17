/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00B61D10(s32);
s32 func_00B6A540(s32, s32);

s32 func_00B6CA40(s32 arg0) {
    if (func_00B6A540(arg0, 1) == 0) {
        return func_00B61D10(arg0) != 0;
    }
    return 1;
}
