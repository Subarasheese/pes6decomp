/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 id;
    s32 handle;
} Slot;

typedef struct {
    u8 pad0[0x14];
    Slot *slots;
} Owner;

s32 func_00141300(s32);
s32 func_00154070(s32);
void func_00141010(s32, s32);

void func_0017BE90(Owner *owner, s32 index, s32 id) {
    Slot *slot = &owner->slots[index];

    slot->id = id;
    slot->handle = func_00154070(func_00141300(slot->id));
    func_00141010(slot->id, slot->handle);
}
