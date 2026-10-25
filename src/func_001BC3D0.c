/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00529A70[];
s32 func_001BC7D0(void);
s32 func_001BA3D0(s32, s32, void *, s32, s32);
void func_001BC420(void);

s32 func_001BC3D0(s32 a0, s32 a1, s32 a2, s32 arg) {
    s32 result = -1;

    if (arg != 0) {
        result = func_001BA3D0(D_00529A70[0], func_001BC7D0(), func_001BC420, 0, arg);
    }
    return result;
}
