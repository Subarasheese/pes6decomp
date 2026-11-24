/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002E92B0(s32 state);
extern s32 D_003E9DF0, D_003E9DF4, D_003E9DF8;
extern s8 D_003E9E20;

s32 func_002E8CB0(s32 request, s32 pad) {
    s32 started = 0;
    if (D_003E9DF0 == 0) {
        D_003E9DF8 = request;
        D_003E9E20 = pad;
        func_002E92B0(0);
        D_003E9DF4 = 0;
        started = 1;
    }
    return started;
}
