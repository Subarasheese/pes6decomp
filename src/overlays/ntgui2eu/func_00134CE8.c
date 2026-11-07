/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00134EA0(s32, s32, s32);
extern void func_001B02B0(s32, s32);
extern s32 D_011D6F04[];
extern s32 D_011D6F08[];

s32 func_00134CE8(void) {
    func_00134EA0(D_011D6F04[0], 0x1A, 2);
    func_001B02B0(D_011D6F08[0], D_011D6F08[0] + 1);
    return 2;
}
