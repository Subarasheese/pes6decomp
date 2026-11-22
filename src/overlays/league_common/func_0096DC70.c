/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct LeagueAllocation {
    void *data;
    struct LeagueAllocation *next;
} LeagueAllocation;
extern LeagueAllocation *D_003EA944;
extern s32 D_003EA948;
extern void Pes6Heap_Free(void *ptr);
extern s32 func_001540E0(s32 zone);
extern void Pes6HeapZone_Close(s32), Pes6HeapZone_Open(s32);
extern void func_002CAB60(void), func_0096D8A0(void);
void func_0096DC70(void) {
    LeagueAllocation *entry = D_003EA944, *next;
    if (entry) {
        if (entry)
            do {
                Pes6Heap_Free(entry->data);
                next = entry->next;
                Pes6Heap_Free(entry);
                entry = next;
            } while (next);
        D_003EA944 = 0;
        D_003EA948 = 0;
        if (func_001540E0(11))
            Pes6HeapZone_Close(11);
        if (func_001540E0(5)) {
            Pes6HeapZone_Close(5);
            Pes6HeapZone_Open(5);
        }
        if (func_001540E0(16))
            func_002CAB60();
    }
    D_003EA944 = 0;
    D_003EA948 = 0;
    func_0096D8A0();
}
