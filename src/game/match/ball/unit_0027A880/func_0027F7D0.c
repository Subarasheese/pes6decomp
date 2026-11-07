/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_0027EB90();
extern s32 func_00BC3950(s32);
extern void func_00BC3A80(s32);

s32 func_0027F7D0(s32 value) {
    s32 result;

    result = func_0027EB90();
    if (func_00BC3950(value) == 0) {
        func_00BC3A80(value);
    }
    return result;
}
