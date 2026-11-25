/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 reserved00[0x10], player, reserved11[0x17];
} ActionEntry;
extern ActionEntry D_00592800[];

s32 func_00997EB0(const u8 *player) {
    u32 id = *player;
    s32 i;
    ActionEntry *entry = D_00592800;
    for (i = 0; i < 8; ++i) {
        if (id == entry->player)
            return 1;
        ++entry;
    }
    return 0;
}
