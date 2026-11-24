/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    s32 kind;
    u8 actor, reserved05[0x40 - 5];
} MatchHistoryEntry;
typedef struct {
    u32 field0;
    MatchHistoryEntry entries[10];
} HistoryBuffer;
extern HistoryBuffer *Pes6BallOwnerRecord;
typedef struct {
    u32 field0;
    MatchHistoryEntry entries[2];
} SideHistory;
extern SideHistory D_00CCAD70;
void func_00C15F90(void) {
    SideHistory *teams = &D_00CCAD70;
    s32 i;
    for (i = 10; i > 0; --i) {
        MatchHistoryEntry *entry = &Pes6BallOwnerRecord->entries[i - 1];
        if (entry->kind) {
            const Pes6MatchPlayer *player = Pes6MatchPlayer_Get(entry->actor);
            teams->entries[player->team] = *entry;
        }
    }
}
