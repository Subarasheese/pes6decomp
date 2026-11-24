/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef union {
    s32 event;
    u8 flags[4];
} HistoryDetail;
typedef struct {
    s32 kind;
    u8 actor, reserved05[0x1b];
    HistoryDetail detail;
    u8 reserved24[28];
} MatchHistoryEntry;
u8 func_00C162F0(const MatchHistoryEntry *entry, u8 wanted) {
    s32 i;
    u8 found = 0;
    for (i = 0; i < 10; ++i) {
        if (!(&entry[i])->kind)
            break;
        if ((&entry[i])->kind == 3 && (&entry[i])->detail.event == 8)
            break;
        {
            const Pes6MatchPlayer *actor = Pes6MatchPlayer_Get((&entry[i])->actor);
            if ((u8)wanted == (u8)((actor->team << 5) | (actor->slot & 31))) {
                found = 1;
                break;
            }
        }
    }
    return found;
}
