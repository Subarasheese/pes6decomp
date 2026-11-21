/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0083B0D0(s32);
extern s32 func_00846D80(void);

s32 func_0083B340(s32 arg0) {
    s32 value1;
    s32 value2;
    value1 = func_00846D80();
    if (((value1 < 3) ^ 1) == 0) {
        value2 = func_0083B0D0(arg0);
        return value2;
    } else {
        return 4;
    }
}
