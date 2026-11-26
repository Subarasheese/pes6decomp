#ifndef PES6_LEAGUE_LIST_MOVE_ROW_H
#define PES6_LEAGUE_LIST_MOVE_ROW_H

#include "pes6/league_list_page.h"

extern void LEAGUE_LIST_HIGHLIGHT(u8 tab, u8 row);
extern s32 SD_call(s32 sound);

void LEAGUE_LIST_MOVE_ROW(s32 direction) {
    s32 scroll;
    u8 moved;
    u8 last;
    LeagueListPage *page = (LeagueListPage *)LEAGUE_LIST_GET_PAGE();
    if (!page)
        return;
    if (page->counts[page->tab] <= 0)
        return;
    if (page->selectedRows[page->tab] >= page->counts[page->tab])
        page->selectedRows[page->tab] = page->counts[page->tab] - 1;
    moved = 0;
    scroll = 0;
    last = page->counts[page->tab] - 1;
#if LEAGUE_LIST_RESOURCE != 0x102AC
    switch (page->phase) {
    default:
        return;
    case 0:
        break;
    }
#endif
    if (direction < 0) {
        if (page->selectedRows[page->tab] > 0) {
            page->selectedRows[page->tab] += (u8)direction;
            if (page->selectedRows[page->tab] < page->firstRows[page->tab]) {
                page->firstRows[page->tab] += (u8)direction;
                scroll = -direction;
            }
            moved = 1;
        } else
            page->selectedRows[page->tab] = 0;
    } else if (direction > 0) {
        if (page->selectedRows[page->tab] < last) {
            page->selectedRows[page->tab] += (u8)direction;
            if (page->selectedRows[page->tab] > page->firstRows[page->tab] + 10) {
                page->firstRows[page->tab] += (u8)direction;
                scroll = -direction;
            }
            moved = 1;
        } else
            page->selectedRows[page->tab] = last;
    }
    if (scroll) {
        page->scrollOffset = page->height;
        page->scrollStep = -8;
        page->direction = scroll;
        page->phase = 2;
    } else if (moved == 1) {
        SD_call(0x8400F802);
        LEAGUE_LIST_HIGHLIGHT(page->tab, page->selectedRows[page->tab]);
    }
}

#endif
