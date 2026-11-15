/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_005A3044[];
void func_001540E0(s32);
void Pes6Heap_Create(s32, u32, u32);
void func_001540B0(s32, s32);

void func_002CAE20(void) {
    u32 start;

    func_001540E0(15);
    start = ((u32)D_005A3044 + 0xFFF) & ~0xFFF;
    Pes6Heap_Create(15, start, (start + 0x3E670) & ~0xFFF);
    func_001540B0(15, 0);
}
