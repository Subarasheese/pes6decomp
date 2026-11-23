#ifndef PES6_CUP_SCROLL_H
#define PES6_CUP_SCROLL_H

#include "types.h"

typedef struct {
    u8 pad00[4];
    void *teams[CUP_TEAMS], *labels[CUP_TEAMS];
    u8 reservedBeforeCaption[CUP_CAPTION_OFFSET - 4 - 2 * CUP_TEAMS * 4];
    void *caption;
    void *group[8];
    u8 gap[4];
    void *groupLabel[CUP_LABELS];
} CupScroll;
extern CupScroll *CUP_GET_PAGE(void);
extern s32 func_00949340(s16 *, s32, s32);
extern void func_00973B80(void *, float, float);
s32 CUP_SCROLL(s32 scale, s16 current, s32 step) {
    s16 distance, prior;
    CupScroll *page;
    s32 i;
    float delta;
    /* Cleared on entry in all five PAL bracket layouts. */
    u8 initialState[16] = {0};
    page = CUP_GET_PAGE();
    if (!page)
        return 0;
    prior = current;
    func_00949340(&current, 0, step);
    distance = prior - current;
    delta = (float)(distance * scale);
    for (i = 0; i < 8; ++i)
        func_00973B80(page->group[i], 0.0f, delta);
    for (i = 0; i < CUP_LABELS; ++i)
        func_00973B80(page->groupLabel[i], 0.0f, delta);
    for (i = 0; i < CUP_TEAMS; ++i) {
        func_00973B80(page->teams[i], 0.0f, delta);
        func_00973B80(page->labels[i], 0.0f, delta);
    }
    func_00973B80(page->caption, 0.0f, delta);
    return current;
}

#endif
