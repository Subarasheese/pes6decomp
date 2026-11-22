/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 Pes6Heap_Alloc(s32, s32);
s32 func_0021FCC0(s32);
s32 func_0021FE80(s32, s32);
s32 func_0021FEB0(s32);
s32 func_00220240(s32, s32);
extern s32 D_003EB104;

void func_00BFFD30(void) {
    s32 temp_v0;

    temp_v0 = Pes6Heap_Alloc(1, func_0021FCC0(0x18));
    func_00220240(temp_v0, 0xB);
    func_0021FE80(temp_v0, 0x18);
    func_0021FEB0(3);
    D_003EB104 = temp_v0;
}
