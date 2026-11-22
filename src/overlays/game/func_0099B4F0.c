/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_00278280(s32);
extern void func_0099C5D0(void);
extern void func_0099C680(void);
extern u8 D_00591DCC[];
typedef struct {
    u8 kind, side, slot, state;
    u8 reserved04[8], player, reserved0D, flag0E, flag0F, member;
    u8 reserved11[0x17];
} PlayerSelection;
extern PlayerSelection D_00592800[];

void func_0099B4F0(void) {
    u8 kind;
    s32 index;
    PlayerSelection *slot;
    index = 0;
    slot = D_00592800;
    do {
        kind = slot->kind;
        if (kind == 0xFF) {
            slot->member = 0xFF;
            slot->side = 0xFF;
            slot->slot = 0xFF;
            slot->flag0E = 0;
            slot->player = 0xFF;
            slot->flag0F = 0;
        } else {
            if (kind == 8) {
                slot->state = 0xA;
            }
            if (slot->side == 0) {
                slot->player = (D_00591DCC[0] * 0xB) + 1;
            } else {
                slot->player = 0xC - (D_00591DCC[0] * 0xB);
            }
            if (slot->state == 0) {
                func_00278280(index & 0xFF);
            }
        }
        index += 1;
        ++slot;
    } while (index < 8);
    func_0099C680();
    func_0099C5D0();
}
