#ifndef PES6_LEAGUE_LIST_SETUP_H
#define PES6_LEAGUE_LIST_SETUP_H

#include "pes6/league_list_page.h"

extern void *func_001D5A10(s32 resourceId);
extern s8 *func_009732F0(s32 count, s32 mode);
extern void LEAGUE_LIST_BUILD(void);
extern void LEAGUE_LIST_DISPLAY_TAB(u8 tab);
extern void LEAGUE_LIST_DISPLAY_ROWS(u8 tab, u8 row);
extern s32 LEAGUE_LIST_SCROLL(s32 scale, s16 current, s32 step);
extern void LEAGUE_LIST_HIGHLIGHT(u8 tab, u8 row);

void LEAGUE_LIST_INIT(void) {
    u8 row, tab;
    LeagueListPage *page = (LeagueListPage *)LEAGUE_LIST_GET_PAGE();
    if (!page)
        return;
    page->resource = func_001D5A10(LEAGUE_LIST_RESOURCE);
    if (!page->resource)
        return;
    page->layers[0] = func_009732F0(32, 5);
    page->layers[1] = func_009732F0(23, 1);
    page->layers[2] = func_009732F0(33, 1);
    LEAGUE_LIST_BUILD();
    tab = page->tab;
    row = page->selectedRows[tab];
    LEAGUE_LIST_DISPLAY_TAB(tab);
    LEAGUE_LIST_DISPLAY_ROWS(tab, row);
    LEAGUE_LIST_SCROLL(-page->firstRows[page->tab], page->height, (s16)-page->height);
    LEAGUE_LIST_HIGHLIGHT(page->tab, page->selectedRows[page->tab]);
}

#endif
