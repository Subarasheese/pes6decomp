#ifndef PES6_LEAGUE_LIST_SCROLL_H
#define PES6_LEAGUE_LIST_SCROLL_H

#include "pes6/league_list_page.h"

static inline void shiftRow(LeagueRowPosition *position, float dx, float dy) {
    position->x += dx;
    position->y += dy;
}

extern s32 func_00949340(s16 *current, s32 target, s32 step);
extern void func_00973C70(void *widget, const LeagueRowPosition *position);
extern s32 func_001D7A20(void *widget, LeagueRowPosition *position, u16 anchor);
extern void func_001D7D60(void *widget, s8 enabled);
extern void func_00973470(s8 *label, s8 enabled);
extern float func_009ABBD0(u8 visible, u8 count, s16 current, s16 height, u8 first, s32 direction);
extern void func_0097FA10(void *scrollbar, float fraction);

s32 LEAGUE_LIST_SCROLL(s32 scale, s16 current, s32 step) {
    LeagueListPage *page;
    s16 prior, distance;
    s32 row, last, first;
    LeagueRowPosition anchor;
    float delta;
    u32 pageAddress = LEAGUE_LIST_GET_PAGE();
    page = (LeagueListPage *)pageAddress;
    if (!pageAddress)
        return 0;
    prior = current;
    func_00949340(&current, 0, step);
    distance = prior - current;
    first = page->firstRows[page->tab];
    last = first + 10;
    if (current > 0) {
        if (scale > 0)
            last += scale;
        else
            first += scale;
    }
    delta = (float)(distance * scale);
    for (row = 0; row < page->counts[page->tab]; row++) {
        shiftRow(&page->positions[row], 0.0f, delta);
        func_00973C70(page->rows[row], &page->positions[row]);
        func_001D7A20(page->rows[row], &anchor, LEAGUE_LIST_ROW_ANCHOR);
        func_00973C70(page->markers[row], &anchor);
        if (row < first || row > last) {
            func_001D7D60(page->rows[row], 0);
            func_00973470(page->labels[row], 0);
        } else {
            func_001D7D60(page->rows[row], 1);
            func_00973470(page->labels[row], 1);
        }
    }
    if (page->counts[page->tab] > 11)
        func_0097FA10(page->scrollbar,
                      func_009ABBD0(11, page->counts[page->tab], current, page->height,
                                    page->firstRows[page->tab], page->direction));
    return current;
}

#endif
