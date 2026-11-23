/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern int sprintf(char *, const char *, ...);
extern const char D_00A010B8[];
s32 func_00946020(s32 index, s32 hour, s32 minute) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (!row)
        return 0;
    row->schedule.times[1].hour = hour;
    row->schedule.times[1].minute = minute;
    row->schedule.times[1].timeText[0] = 0;
    sprintf(row->schedule.times[1].timeText, D_00A010B8, hour % 12, minute);
    return 1;
}
