/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009FD320(s32, s32, s32, s32 *, s32, s32);

extern char D_00A03760[];

void func_009FCC00(s32 arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    func_009FD320(arg0, (s32) arg1, 0x22D0, (s32 *) arg2, (s32) ((void *)D_00A03760), 3);
    *arg3 = *arg1;
}
