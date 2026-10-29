/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x14];
    s16 scale;
    u8 pad16[0xCA];
    f32 x;
    u8 padE4[0x15C];
} Rec240;

extern Rec240 Pes6MatchPlayers[];

s32 func_0030DC60(f32 *out, s32 index) {
    Rec240 *rec;

    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    rec = &Pes6MatchPlayers[index];
    *out = rec->x * rec->scale;
    return 1;
}
