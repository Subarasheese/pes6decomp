/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6OptionData_GetBlock304(s32, s32, s32, s32);
extern s32 SD_call(s32);
extern s8 *D_003AE9D0[];
extern void func_00C99AD0(void *, s32);

s32 func_00901260(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Pes6OptionData_GetBlock304(arg0, arg1, arg2, arg3);
    SD_call(-0x7BFD7C00);
    func_00C99AD0(((void **)(D_003AE9D0[0]))[0x13], arg2);
    ((s16 *)(((s8 **)(D_003AE9D0[0]))[0x13]))[8] = 0;
    return 2;
}
