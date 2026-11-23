/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_009E41F0(s32);
extern s32 func_009E58B0(s32);
extern u8 *D_00A7DDA8;
void func_009CBBA0(s32 value) {
    s32 enabled = value != 1;
    if ((*D_00A7DDA8) == 2) {
        func_009E58B0(enabled);
        return;
    }
    func_009E41F0(enabled);
}
