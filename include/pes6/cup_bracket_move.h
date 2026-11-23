#ifndef PES6_CUP_BRACKET_MOVE_H
#define PES6_CUP_BRACKET_MOVE_H

#include "pes6/cup_navigation.h"
enum BracketDirection { BRACKET_UP, BRACKET_DOWN, BRACKET_LEFT, BRACKET_RIGHT };
enum { BRACKET_MOVE_CURSOR = 3, BRACKET_SCROLL = 4 };

typedef struct {
    u8 beforeDepth[CUP_DEPTH_OFFSET];
    float tabDepth[CUP_DEPTH_COUNT];
    u8 offsetCount;
    s16 distance, remaining;
    s32 scrollDirection;
    s16 step;
    u8 entered;
    u8 beforeNavigation[13];
    CupNavigation navigation;
    u8 column, row;
} CupMovePage;

extern CupMovePage *CUP_PAGE(void);
extern s32 CUP_CAN_ADVANCE(void), CUP_CAN_RETREAT(void);
extern u8 func_00949130(u8 selection, s32 direction, u8 width, u8 cells);

static inline void clampBracketColumn(CupMovePage *page, const u8 *limits) {
    if (page->column >= limits[page->row])
        page->column = limits[page->row] - 1;
}

/* The four directional handlers pass a unit step. The bracket row selects
   one of the widths below. */
s32 CUP_MOVE(s32 horizontal, s32 vertical) {
    u8 limits[] = {
        CUP_OPENING_COLUMNS, CUP_SECOND_COLUMNS,
#ifdef CUP_MIDDLE_COLUMNS
        CUP_MIDDLE_COLUMNS,
#endif
        3, 4
    };
    enum { ROW_COUNT = sizeof(limits) / sizeof(limits[0]) };
    s32 direction;
    u8 columns;
    u8 previous;
    CupMovePage *page;
    page = CUP_PAGE();
    if (!page)
        return 0;
    previous = page->column;
    if (vertical < 0)
        direction = BRACKET_UP;
    else if (vertical > 0)
        direction = BRACKET_DOWN;
    else if (horizontal > 0)
        direction = BRACKET_RIGHT;
    else if (horizontal < 0)
        direction = BRACKET_LEFT;
    switch (page->row) {
    case 0:
        columns = CUP_OPENING_COLUMNS;
        break;
    case 1:
        columns = CUP_SECOND_COLUMNS;
        break;
#ifdef CUP_MIDDLE_COLUMNS
    case 2:
        columns = CUP_MIDDLE_COLUMNS;
        break;
#endif
    case ROW_COUNT - 2:
        columns = 3;
        break;
    case ROW_COUNT - 1:
        columns = 4;
        break;
    }
    if (direction == BRACKET_DOWN && CUP_CAN_ADVANCE() == 1) {
        page->distance = (s16)page->tabDepth[page->offsetCount];
        page->navigation.phase = BRACKET_SCROLL;
        page->offsetCount++;
        page->step = (s16)((-1.0f * page->distance) / 3.0f);
        page->remaining = page->distance;
        page->scrollDirection = -1;
    } else if (direction == BRACKET_UP && CUP_CAN_RETREAT() == 1) {
        page->distance = (s16)page->tabDepth[page->offsetCount - 1];
        page->navigation.phase = BRACKET_SCROLL;
        page->offsetCount--;
        page->step = (s16)((-1.0f * page->distance) / 3.0f);
        page->remaining = page->distance;
        page->scrollDirection = 1;
    }
    if (direction == BRACKET_LEFT || direction == BRACKET_RIGHT) {
        page->column = func_00949130(page->column, direction, columns, columns);
        if (page->navigation.phase != BRACKET_SCROLL)
            page->navigation.phase = BRACKET_MOVE_CURSOR;
    }
    if (direction == BRACKET_UP || direction == BRACKET_DOWN) {
        if (!(page->row == ROW_COUNT - 1 && direction == BRACKET_DOWN) &&
            !(page->row == 0 && direction == BRACKET_UP)) {
            page->entered = 0;
            page->row = func_00949130(page->row, direction, 1, ROW_COUNT);
            if (page->navigation.phase != BRACKET_SCROLL)
                page->navigation.phase = BRACKET_MOVE_CURSOR;
            if (!CUP_CLAMP_AT_EDGE)
                clampBracketColumn(page, limits);
        }
        if (CUP_CLAMP_AT_EDGE)
            clampBracketColumn(page, limits);
    }
    if (previous == page->column && (direction == BRACKET_LEFT || direction == BRACKET_RIGHT))
        return -1;
    return 0;
}

#endif
