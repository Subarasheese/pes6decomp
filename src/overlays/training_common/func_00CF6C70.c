/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 *D_003AE9D0[];
extern void func_00C99A40(s32);
extern void func_00C99AD0(void *, s32);

s32 func_00CF6C70(s32 arg0, s32 arg1, s32 arg2) {
    ((s16 *)(*(s8 **)(D_003AE9D0[0])))[8] = 1;
    func_00C99A40(arg0);
    func_00C99AD0(*(void **)(D_003AE9D0[0]), arg2);
    return 2;
}
