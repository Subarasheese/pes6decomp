/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00209C90(s32, s32);
s32 func_0020A550(s32);
extern s32 D_003EA3E4;

void func_008B2DD0(void) {
    s32 temp_v0;

    temp_v0 = func_0020A550(0x19A);
    D_003EA3E4 = temp_v0;
    func_00209C90(temp_v0, 1);
}
