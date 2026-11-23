/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_001540E0(s32 zone);
extern void Pes6HeapZone_Close(s32 zone), Pes6HeapZone_Open(s32 zone), func_002CAB60(void);
void func_0096D830(void) {
    if (func_001540E0(11))
        Pes6HeapZone_Close(11);
    if (func_001540E0(5)) {
        Pes6HeapZone_Close(5);
        Pes6HeapZone_Open(5);
    }
    if (func_001540E0(16))
        func_002CAB60();
}
