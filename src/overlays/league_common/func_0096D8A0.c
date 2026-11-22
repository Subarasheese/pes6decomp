/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001540E0(s32);
extern s32 func_001A5BE0(s32);
extern void *func_001E7100(s32);
extern s32 func_0021E000(u32);
extern s32 func_0022FCC0(u8);
extern void func_002CAB70(void);
extern void Pes6HeapZone_Open(s32);
extern s32 Pes6HeapZone_Close(s32);

extern char D_00591C09[];

void func_0096D8A0(void) {
    if (func_001E7100(func_0021E000(func_0022FCC0((*(u8 *)D_00591C09)))) == 0) {
        if (func_001540E0(8) != 0) {
            Pes6HeapZone_Close(8);
        } else {
            func_001A5BE0(4);
        }
        if (func_001540E0(9) != 0) {
            Pes6HeapZone_Close(9);
        } else {
            func_001A5BE0(2);
        }
        if (func_001540E0(0xA) != 0) {
            Pes6HeapZone_Close(0xA);
        } else {
            func_001A5BE0(3);
        }
        if (func_001540E0(0xB) != 0) {
            Pes6HeapZone_Close(0xB);
        } else {
            func_001A5BE0(5);
        }
        func_002CAB70();
        Pes6HeapZone_Open(0xB);
    }
}
