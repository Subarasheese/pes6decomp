/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "types.h"

extern void Pes6TextureCache_Invalidate(s32);
extern void func_0014E810(s32, s32, s32, s32, s32);

extern s32 D_005202F8[];
extern s32 D_005202FC[];
extern u16 D_00520300[];

void func_0019E900(s32 arg0, s32 arg1) {
    if (D_005202F8[0] != 0) {
        func_0014E810(D_005202FC[0], D_005202F8[0], 0, (s32)D_00520300[0],
                      ((s32)(arg0 * 0xFF) / arg1) & 0xFF);
        Pes6TextureCache_Invalidate(0x2752);
    }
}
