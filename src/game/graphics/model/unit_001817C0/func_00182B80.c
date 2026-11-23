/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "types.h"
extern void func_00147F00(s32, s32, s32 *, void (*)(void), s32, s32);
extern s32 D_00397080[];
extern void func_00182B40(void);
extern void *D_0051FF68[];
void func_00182B80(void) {
    if (D_0051FF68[0] != 0)
        func_00147F00(1, 12, D_00397080, func_00182B40, 0, 0);
}
