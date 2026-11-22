/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 Pes6Heap_Free(s32);
s32 func_001C4730(s32, s32, u16);
extern char D_005202F8[];
extern char D_005202FC[];
extern char D_00520302[];

void func_0019E960(void) {
    s32 *entry;
    u16 value;
    s32 value2;
    char *entry2;
    u16 value3;
    char *entry3;

    unsigned int value4;
    value2 = *((s32 *)D_005202FC);
    if (value2) {
        ;
        value3 = *((u16 *)D_00520302);
        entry = (s32 *)D_005202FC;
        ;
        value4 = value3;
        value = value4;
        func_001C4730(*((s32 *)D_005202F8), *entry, value);
        entry3 = D_005202FC;
        Pes6Heap_Free(*((s32 *)entry3));
    }
    entry2 = D_005202FC;
    *((s32 *)entry2) = (*((s32 *)D_005202F8) = 0);
}
