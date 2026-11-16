/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002937A0(s32);
extern void func_0028F230(s32, s32, s32, s32 *, s32);
extern s32 D_003D9D60[];
extern s32 D_003D9DA0[];
extern s32 D_003D9DE0[];

void func_0028F6A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp40[3];
    s32 i;
    s32 idx;

    idx = func_002937A0(arg2) & 0xFF;
    for (i = 0; i < 3; i++) {
        if (i == 2) {
            sp40[i] = D_003D9D60[idx];
        } else if (i == 1) {
            sp40[i] = D_003D9DE0[idx];
        } else {
            sp40[i] = D_003D9DA0[idx];
        }
    }
    func_0028F230(arg0, arg1, arg2, sp40, 0x64);
}
