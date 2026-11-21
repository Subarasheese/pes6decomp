/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DF730(s32, s32);

s32 func_008B9A90(s32 arg0, s32 arg1) {
    s32 var_a1;

    if (arg1 == 1) {
        var_a1 = 0;
    } else {
        var_a1 = 2;
    }
    return func_002DF730(arg0, var_a1);
}
