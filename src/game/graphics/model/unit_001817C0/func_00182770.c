/* compiler: mwcc-3.0.1b210 */
#include "pes6/texture_release.h"

typedef struct {
    s32 owner;
    void *handle;
} Slot;

void Pes6Heap_Free(void *);

void func_00182770(Slot *slot) {
    func_00140FE0(slot->owner, slot->handle);
    Pes6Heap_Free(slot->handle);
}
