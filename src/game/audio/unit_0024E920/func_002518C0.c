/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
extern s32 D_003E9B58;
extern s32 func_0024FB20(s32, s32, s32, s32);
extern void func_00255B70(void);
s32 func_002518C0(s32 arg) {
    D_003E9B58 = 0;
    func_0024FB20(0x22000037, arg, 0, 0);
    for (;;) {
        func_00255B70();
        if (func_0024FB20(0x22000027, 0, 0, 0) == 7)
            return 1;
        ++D_003E9B58;
    }
}
