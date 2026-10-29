/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x68];
    u8 flags;
    u8 pad69[0x2DF];
} Ent;

extern char Pes6MatchPlayers[];
extern Ent Pes6MatchSquads[][32];

s32 func_00310860(s32 index) {
    s32 maskedIndex;
    u8 *rec;
    Ent *ent;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        index = maskedIndex % 23;
    } else {
        index = 1;
    }
    rec = (u8 *)Pes6MatchPlayers + index * 0x240;
    ent = &Pes6MatchSquads[rec[0x12]][rec[0x11]];
    return ent->flags & 1;
}
