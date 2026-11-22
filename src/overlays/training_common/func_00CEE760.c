/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001540E0(s32);
extern s32 func_001A5BB0(s32);
extern s32 func_001A5BE0(s32);
extern void func_00264790(void *, u8);
extern void Pes6HeapZone_Open(s32);

void func_00CEE760(s32 arg0) {
    if (func_001A5BB0(3) != 0) {
        func_001A5BE0(3);
    }
    if (func_001540E0(0xA) == 0) {
        Pes6HeapZone_Open(0xA);
    }
    func_00264790((void *) arg0, 1U);
}
