/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u16 func_00221D10(s32, s32, s32);
extern s32 func_0024EC90(s32);

u16 func_00824A00(s32 arg0, s32 arg1) {
    s32 value;

    value = 0;
    if (func_0024EC90(arg0) == 3) {
        value = 1;
    }
    return func_00221D10(arg0, arg1, value);
}
