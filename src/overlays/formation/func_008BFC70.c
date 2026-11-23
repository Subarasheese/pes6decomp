/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 slot, side, reserved02, disabled, reserved04[2], selection, reserved07[33];
} FormationSlot;
typedef struct {
    u8 reserved00[0x75d];
    u8 selections[8];
} FormationSelection;
extern FormationSlot D_00592800[8];
void func_008BFC70(s32 side, const FormationSelection *selection) {
    s32 i = 0;
    FormationSlot *slot = D_00592800;
    do {
        u8 index = slot->slot;
        if (index < 8 && side == slot->side && slot->disabled == 0)
            slot->selection = selection->selections[index];
        ++slot;
        ++i;
    } while (i < 8);
}
