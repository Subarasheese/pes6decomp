/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern s32 func_0099AD10(char *, char *, char *, s32, s32);
s32 func_009463B0(s32 index, s32 month, s32 day) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (!row)
        return 0;
    row->schedule.times[0].month = month;
    row->schedule.times[0].day = day;
    row->schedule.times[0].dayText[0] = 0;
    row->schedule.times[0].monthText[0] = 0;
    row->schedule.times[0].dateText[0] = 0;
    func_0099AD10(row->schedule.times[0].dateText, row->schedule.times[0].dayText,
                  row->schedule.times[0].monthText, month, day);
    return 1;
}
