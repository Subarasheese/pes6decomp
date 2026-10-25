/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x8];
    s16 value;
    u8 pad[0x28 - 0x8 - 2];
} Stat;

typedef struct {
    u8 pad0[0x28];
    Stat stats[17];
    u8 tail[0x24];
} Player;

extern Player *D_00CB3300[];
s32 func_00C17E10(u8, u8);

s32 func_0030E0E0(s16 *out, s32 player, s32 slot) {
    u8 s = func_00C17E10((u8)player, (u8)slot);

    if (s != 0xFF) {
        *out = D_00CB3300[0][(u8)player].stats[s].value;
    } else {
        *out = 0xFF;
    }
    return 1;
}
