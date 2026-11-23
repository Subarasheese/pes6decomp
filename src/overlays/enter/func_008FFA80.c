/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct EntryRecord {
    u8 reserved00[0x8];
    struct EntryRecord *next;
} EntryRecord;
extern void Pes6Heap_Free(void *);
extern void (*D_0092F0A8)(void);
extern EntryRecord *D_0092F0AC;
extern void func_008FFE30(void);
s32 func_008FFA80(void) {
    EntryRecord *entry = D_0092F0AC->next;
    Pes6Heap_Free(D_0092F0AC);
    D_0092F0AC = entry;
    if (entry == 0) {
        D_0092F0A8 = 0;
    } else {
        D_0092F0A8 = &func_008FFE30;
    }
    return 1;
}
