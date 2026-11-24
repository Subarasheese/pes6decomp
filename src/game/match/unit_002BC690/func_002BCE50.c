/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
#include "pes6/match_lineup_statistics.h"
typedef struct {
    u8 outgoing[11], incoming[11];
    s32 count;
} CueSquadChanges;
void func_002BCE50(s32 side, const CueSquadChanges *changes) {
    if (changes) {
        u8 period = func_00C18710();
        s32 i;
        for (i = 0; i < changes->count; ++i) {
            u8 added = changes->incoming[i];
            func_00C122B0((u8)period, side, added);
            func_00C121E0(side, changes->outgoing[i] & 31, added);
        }
    }
}
