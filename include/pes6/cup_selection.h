#ifndef PES6_CUP_SELECTION_H
#define PES6_CUP_SELECTION_H
#include "types.h"
typedef struct {
    u8 reserved00[5], team[2];
} CupPair;
typedef struct {
    s32 busy;
    u8 reserved04, size, reserved06[0x412];
    u8 cursor, previous;
    u8 reserved41a[0x86];
    CupPair *lastPair;
} CupSelection;
extern CupSelection *func_009A0430(void);
extern void func_009A3440(s32 cursor);
extern void SD_call(u32 sound);
typedef struct {
    u8 dir[5];
} CursorLinks;
extern const CursorLinks D_009C69E0[][32];
static inline s32 cup_move_cursor(u32 direction) {
    CupSelection *page;
    u8 next;
    u8 size;
    u32 current;
    page = func_009A0430();
    if (!page)
        return 0;
    if (page->busy)
        return 0;
    current = page->cursor;
    size = page->size;
    next = D_009C69E0[page->size][current].dir[direction];
    if (next == 0xff)
        return 0;
    if ((size == 8 && next == 7) || (size == 16 && next == 15)) {
        CupPair *pair = page->lastPair;
        if (!pair)
            return 0;
        if (pair->team[0] == 0xff || pair->team[1] == 0xff)
            return 0;
    }
    if (page->cursor != next) {
        page->previous = current;
        page->cursor = next;
        func_009A3440(next);
        SD_call(0x8400f802U);
    }
    return 0;
}
#endif
