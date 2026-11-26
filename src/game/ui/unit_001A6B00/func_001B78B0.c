/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern s16 D_003F7794[];
extern f32 D_00524798[];
extern void func_001B70A0(void);
void func_001B78B0(s32 mode) {
    switch (mode) {
    case 0:
        D_00524798[0] = (D_003F7794[0] - 20);
        break;
    case 1:
        D_00524798[0] = (D_003F7794[0] - 120);
        break;
    default:
        break;
    }
    func_001B70A0();
}
