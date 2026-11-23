/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void func_00214290(s32 handle);
extern void func_0099C7C0(void *page);
extern s32 *D_00A68D80;
void func_0097A070(void) {
    if (D_00A68D80 != 0) {
        func_00214290(*D_00A68D80);
        func_0099C7C0(D_00A68D80);
        D_00A68D80 = 0;
    }
}
