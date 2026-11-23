/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s8 *func_0099C7E0(s32);
extern void func_009E0100(s32, s32, s32, s32);
extern s8 *D_00A7DEE0;
void func_009E0430(s32 first, s32 second, s32 third, s32 fourth) {
    s8 *state;
    if (D_00A7DEE0 == 0) {
        state = func_0099C7E0(1);
        D_00A7DEE0 = state;
        *state = 0;
        func_009E0100(first, second, third, fourth);
    }
}
