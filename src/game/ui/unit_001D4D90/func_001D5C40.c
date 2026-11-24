/* compiler: mwcc-3.0.1b151 */

#include "pes6/resource_bank_load.h"

typedef struct SpriteInstance {
    struct SpriteInstance *prev, *next, *prevInBank;
    struct SpriteInstance *nextInBank;
} SpriteInstance;
typedef struct SpriteBank {
    ResourceBankLink links;
    void *file, *directory, *resource, *data;
    s32 count;
    SpriteInstance *first, *last;
    u8 locked;
} SpriteBank;

extern void Pes6Heap_Free(void *), func_001D7F10(void *instance);

static inline void freeInstances(SpriteBank *bank) {
    if (bank && bank->count) {
        SpriteInstance *instance = bank->first;
        do {
            SpriteInstance *next = instance->nextInBank;
            func_001D7F10(instance);
            instance = next;
        } while (instance);
    }
}

void func_001D5C40(s32 id) {
    SpriteBank *bank = (SpriteBank *)findResourceBank(D_003E9944, id);
    if (!bank || bank->locked)
        return;
    freeInstances(bank);
    if (D_003E9944 == &bank->links) {
        D_003E9944 = bank->links.next;
        if (!D_003E9944)
            D_003E9948 = 0;
    } else if (D_003E9948 == &bank->links) {
        D_003E9948 = bank->links.prev;
        D_003E9948->next = 0;
    } else {
        bank->links.next->prev = bank->links.prev;
        bank->links.prev->next = bank->links.next;
    }
    Pes6Heap_Free(bank->file);
    if (bank->resource)
        Pes6Heap_Free(bank->resource);
    if (bank->data)
        Pes6Heap_Free(bank->data);
    Pes6Heap_Free(bank);
}
