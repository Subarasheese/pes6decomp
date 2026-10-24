/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 active;
    s32 handle;
    u8 pad[0x58];
} Slot60;

extern char D_0051FF38[];
void func_001824C0(Slot60 *);

void func_001819A0(s32 index) {
    Slot60 *slot = &M2C_FIELD(D_0051FF38, Slot60 **, 0)[index];

    if (slot->active == 0) {
        return;
    }
    func_001824C0(slot);
}
