/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern s32 func_0099AD10(char *, char *, char *, s32, s32);
s32 func_00946150(s32 index, s32 month, s32 day) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (!row)
        return 0;
    row->schedule.times[1].month = month;
    row->schedule.times[1].day = day;
    row->schedule.times[1].dayText[0] = 0;
    row->schedule.times[1].monthText[0] = 0;
    row->schedule.times[1].dateText[0] = 0;
    func_0099AD10(row->schedule.times[1].dateText, row->schedule.times[1].dayText,
                  row->schedule.times[1].monthText, month, day);
    return 1;
}
