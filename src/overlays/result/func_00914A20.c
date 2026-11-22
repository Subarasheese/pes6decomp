/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 Pes6Heap_Free(s32);
s32 func_001BC360(s32);
s32 func_00C75330(s32);
extern char D_00923FCC[];

void func_00914A20(void) {
    s32 value;
    s32 value2;
    value = 0;
    value2 = 0;
    do {
        func_001BC360(*((s32 *)(((s8 *)((*((s32 *)D_00923FCC)) + value2)) + 0x29C)));
        func_001BC360(*((s32 *)(((s8 *)((*((s32 *)D_00923FCC)) + value2)) + 0x2A0)));
        value += 1;
        value2 += 8;
    } while (value < 8);
    func_00C75330((*((s32 *)D_00923FCC)) + 8);
    Pes6Heap_Free(*((s32 *)D_00923FCC));
    *((s32 *)D_00923FCC) = 0;
}
