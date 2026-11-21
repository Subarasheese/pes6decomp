/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008214E0(void);
s32 func_009E9170(s32);

s32 func_00976CF0(s32 arg0) {
    if (func_008214E0() != 1) {
        return 0;
    }
    return func_009E9170(arg0);
}
