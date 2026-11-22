/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009FD320(s32, s32, s32, s32 *, s32, s32);

extern char D_00A037A0[];

void func_009FC4F0(s32 arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    func_009FD320(arg0, (s32) arg1, 0x8084, (s32 *) arg2, (s32) ((void *)D_00A037A0), 4);
    *arg3 = *arg1;
}
