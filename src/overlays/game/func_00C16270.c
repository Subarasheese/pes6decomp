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
u8 func_00C16270(const MatchHistoryEntry *entry) {
    s32 i;
    u8 found = 0;
    for (i = 0; i < 10; ++i) {
        if (!entry->kind)
            break;
        if (entry->kind == 3 && entry->detail.event == 8)
            break;
        if ((entry->kind == 11 && (u32)(entry->detail.flags[0] - 1) < 2)) {
            found = 1;
            break;
        }
    }
    return found;
}
