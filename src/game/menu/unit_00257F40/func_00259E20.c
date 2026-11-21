/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "types.h"

extern void func_00259CB0(void *);
extern u32 func_0025E0E0(s32);
extern s32 func_0025E100(s32, s32);

extern char D_0058CF84[];
extern s8 D_0058CFB1[];

void func_00259E20(void) {
    if (func_0025E0E0(5) == 2) {
        func_00259CB0(((void *)D_0058CF84));
        func_0025E100(5, 3);
        D_0058CFB1[0] = 0;
    }
}
