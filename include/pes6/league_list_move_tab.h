#ifndef PES6_LEAGUE_LIST_MOVE_TAB_H
#define PES6_LEAGUE_LIST_MOVE_TAB_H

#include "pes6/league_list_page.h"

extern void LEAGUE_LIST_SELECT_TAB(u8 tab, u8 row);
extern s32 LEAGUE_LIST_SCROLL(s32 scale, s16 current, s32 step);
extern void LEAGUE_LIST_HIGHLIGHT(u8 tab, u8 row);

void LEAGUE_LIST_MOVE_TAB(s32 direction) {
    u8 last;
    LeagueListPage *page = (LeagueListPage *)LEAGUE_LIST_GET_PAGE();
    if (!page)
        return;
    if (page->tabCount <= 1)
        return;
    last = page->tabCount - 1;
#if LEAGUE_LIST_RESOURCE != 0x102AC
    switch (page->phase) {
    default:
        return;
    case 0:
        break;
    }
#endif
    if (direction < 0) {
        if (page->tab > 0)
            page->tab += (u8)direction;
        else
            page->tab = last;
    } else if (direction > 0) {
        if (page->tab < last)
            page->tab += (u8)direction;
        else
            page->tab = 0;
    }
    LEAGUE_LIST_SELECT_TAB(page->tab, page->selectedRows[page->tab]);
    LEAGUE_LIST_SCROLL(-page->firstRows[page->tab], page->height, (s16)-page->height);
    LEAGUE_LIST_HIGHLIGHT(page->tab, page->selectedRows[page->tab]);
    page->phase = 1;
}

#endif
