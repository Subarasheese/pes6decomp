/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0021F710(s32);
extern s32 func_0021FA50(s32);
extern s32 func_00264F50(s32);
extern s32 func_002655D0(s32, s32, s32);
extern s32 func_002656B0(s32);

s32 func_0020A4B0(s32 context, s32 input, s32 value) {
    s32 parameter;
    s32 resolved;

    parameter = func_00264F50(input);
    if (func_002656B0(context) == 1) {
        resolved = func_0021FA50(value & 0xFFFF);
    } else {
        resolved = func_0021F710(value & 0xFFFF);
    }
    return func_002655D0(context, resolved, parameter) != 0;
}
