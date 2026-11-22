/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00921D44[];
extern s32 SD_call(s32);
extern s8 D_0058D7A7[];
extern void func_00C99AD0(void *, s32);

s32 func_009018B0(s32 arg0, void *arg1, s32 arg2) {
    SD_call(-0x7BFD7C00);
    func_00C99AD0(arg1, arg2);
    D_0058D7A7[0] = 2;
    D_00921D44[0] = 8;
    return 2;
}
