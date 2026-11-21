/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 *D_003AE9D0[];
extern void func_00C99A40(s32);
extern void func_00C99AD0(void *, s32);

s32 func_008F6930(s32 arg0, s32 arg1, s32 arg2) {
    func_00C99AD0(((void **)(D_003AE9D0[0]))[0x3B], arg2);
    func_00C99A40(arg0);
    ((s16 *)(((s8 **)(D_003AE9D0[0]))[0x3B]))[8] = 1;
    return 2;
}
