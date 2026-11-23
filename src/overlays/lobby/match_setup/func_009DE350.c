/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void func_00214290(s32 handle);
extern void func_0099C7C0(void *page);
extern s32 func_009DEB20(void);
extern s32 *D_00A7DEC8;
void func_009DE350(void) {
    if (D_00A7DEC8 != 0) {
        func_00214290(*D_00A7DEC8);
        func_009DEB20();
        func_0099C7C0(D_00A7DEC8);
        D_00A7DEC8 = 0;
    }
}
