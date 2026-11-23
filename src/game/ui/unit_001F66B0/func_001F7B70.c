/* compiler: mwcc-3.0.1b151 */
#include "pes6/image_layout_bank.h"

extern void Pes6Heap_Free(void *);
extern void func_001F7080(LayoutInstance *);
static inline void freeInstances(LayoutBank *bank) {
    if (bank && bank->instanceCount) {
        LayoutInstance *instance = bank->first;
        do {
            LayoutInstance *next = instance->nextInBank;
            func_001F7080(instance);
            instance = next;
        } while (instance);
    }
}

void func_001F7B70(s32 id) {
    LayoutBank *bank = findLayoutBank(id);
    if (!bank)
        return;
    freeInstances(bank);
    if (D_003E9978 == bank) {
        D_003E9978 = bank->next;
        if (!D_003E9978)
            D_003E997C = 0;
    } else if (D_003E997C == bank) {
        D_003E997C = bank->prev;
        D_003E997C->next = 0;
    } else {
        bank->next->prev = bank->prev;
        bank->prev->next = bank->next;
    }
    Pes6Heap_Free(bank->file);
    if (bank->resources)
        Pes6Heap_Free(bank->resources);
    Pes6Heap_Free(bank);
}
