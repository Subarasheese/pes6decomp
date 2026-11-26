#ifndef PES6_LEAGUE_LIST_DETAIL_H
#define PES6_LEAGUE_LIST_DETAIL_H

#include "pes6/league_list_page.h"

#if LEAGUE_LIST_RESOURCE == 0x102AC
#define LEAGUE_LIST_DETAIL_FORMAT 29
#elif LEAGUE_LIST_RESOURCE == 0x102A9
#define LEAGUE_LIST_DETAIL_FORMAT 16
#else
#define LEAGUE_LIST_DETAIL_FORMAT 26
#endif

extern void func_001D7D60(void *widget, s8 enabled);
#if LEAGUE_LIST_RESOURCE == 0x102A9
extern u8 D_00591C09[];
extern s32 func_0096EA00(void);
extern u16 func_00225720(void);
extern void func_009AE050(u8 competition, u8 division, u8 tab, u16 *teamId, u8 *slot, u8 *index);
#else
extern void func_009AC430(u8 competition, u8 tab, u16 *teamId, u8 *slot, u8 *index);
#endif
extern u16 func_00224BC0(u8 slot, u8 index);
extern s16 func_009ABFD0(u16 playerId, s16 *value, u8 team, u8 row);
extern s32 func_001D7A20(void *widget, LeagueRowPosition *position, u16 anchor);
extern void func_00973C70(void *widget, const LeagueRowPosition *position);
extern f32 func_001D79A0(void *widget, u16 anchor);
extern void func_001D7880(void *widget, f32 depth);
extern void func_009737E0(void *label, s32 format, ...);
extern void func_001D7D80(void *widget, s16 id);

void LEAGUE_LIST_MARKER(u8 tab, u8 row) {
    u8 team;
    s16 value;
    u16 teamId;
    LeagueRowPosition position = {0};
#if LEAGUE_LIST_RESOURCE == 0x102A9
    u8 skip = 0;
#endif
    LeagueListPage *page = (LeagueListPage *)LEAGUE_LIST_GET_PAGE();
    if (!page)
        return;
    func_001D7D60(page->detail, 0);
#if LEAGUE_LIST_RESOURCE == 0x102A9
    func_009AE050(page->competition, page->division, tab, &teamId, &team, 0);
#else
    func_009AC430(page->competition, tab, &teamId, &team, 0);
#endif
    {
        u16 playerId;
#if LEAGUE_LIST_RESOURCE == 0x102A9
        if (D_00591C09[0] == 14 && (u8)func_0096EA00() == 0 && teamId != func_00225720()) {
            if (row >= 12 && row < 17)
                skip = row - 11;
            else if (row > 16)
                skip = 5;
            playerId = func_00224BC0(team, (u8)(row + skip));
        } else {
            playerId = func_00224BC0(team, row);
        }
#else
        playerId = func_00224BC0(team, row);
#endif
        if (func_009ABFD0(playerId, &value, team, row) > 0) {
            func_001D7A20(page->rows[row], &position, LEAGUE_LIST_ROW_ANCHOR + 1);
            func_00973C70(page->detail, &position);
            func_001D7880(page->detail, func_001D79A0(page->rows[row], LEAGUE_LIST_ROW_ANCHOR + 1));
            func_009737E0(page->detailText, LEAGUE_LIST_DETAIL_FORMAT, value);
            if (row >= page->firstRows[tab] + 6)
                func_001D7D80(page->detail, 0);
            else
                func_001D7D80(page->detail, 1);
            func_001D7D60(page->detail, 1);
        }
    }
}

#endif
