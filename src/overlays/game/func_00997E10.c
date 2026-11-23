/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 state;
    u8 reserved[0xf];
    u8 player;
    u8 reserved11[0x17];
} ActionSlot;
extern ActionSlot D_00592800[];
s32 func_00997E10(const u8 *player) {
    s32 id;
    for (id = 0; id < 8; id++) {
        if (D_00592800[id].player == *player && D_00592800[id].state <= 7)
            return (u8)id;
    }
    return 0xff;
}
