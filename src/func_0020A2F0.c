/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0021F710(s32);
extern s32 func_0021FA50(s32);
extern s32 func_00264F50(s32);
extern void func_00265480(s32, s32);
extern void func_00265520(s32, s32, s32);
extern s32 func_002656B0(s32);

void func_0020A2F0(s32 context, s32 input, s32 value, s32 output) {
    s32 parameter;
    s32 resolved;

    if (output == 0) {
        parameter = func_00264F50(input);
        if (func_002656B0(context) == 1) {
            resolved = func_0021FA50(value & 0xFFFF);
        } else {
            resolved = func_0021F710(value & 0xFFFF);
        }
        func_00265520(context, resolved, parameter);
        return;
    }
    func_00265480(context, output);
}
