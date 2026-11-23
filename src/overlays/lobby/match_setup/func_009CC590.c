/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void func_0099C7C0(void *page);
extern s32 func_009E4C60(void);
extern s32 func_009E5FF0(void);
extern u8 *D_00A7DDA8;
void func_009CC590(void) {
    if (D_00A7DDA8 != 0) {
        if ((*D_00A7DDA8) == 2) {
            func_009E5FF0();
        } else {
            func_009E4C60();
        }
        func_0099C7C0(D_00A7DDA8);
        D_00A7DDA8 = 0;
    }
}
