/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 id;
    s32 handle;
} Slot;

void func_00140FE0(s32, s32);
void Pes6Heap_Free(s32);

void func_00182770(Slot *slot) {
    func_00140FE0(slot->id, slot->handle);
    Pes6Heap_Free(slot->handle);
}
