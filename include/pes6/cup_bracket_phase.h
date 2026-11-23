#ifndef PES6_CUP_BRACKET_PHASE_H
#define PES6_CUP_BRACKET_PHASE_H

#pragma opt_propagation off
#include "types.h"
typedef struct {
    u8 reservedBeforeGroup[CUP_PHASE_GROUP_OFFSET];
    void *group;
    u8 reservedBeforePosition[CUP_PHASE_POSITION_OFFSET - CUP_PHASE_GROUP_OFFSET - 4];
    s16 previous, current;
    u8 padCurrent[2];
    s32 scale;
    s16 step;
    u8 scrollActive;
    u8 reserved[14];
    u8 phase, shown, selection;
} CupScreen;
extern CupScreen *CUP_PHASE_GET(void);
extern void *func_00229310(void);
extern void CUP_PHASE_STAGE(void), CUP_PHASE_VISIBLE(s32), CUP_PHASE_OTHER(void), CUP_PHASE_INIT(void),
    SD_call(u32), CUP_PHASE_REDRAW(s32), func_00972020(void *, s32), CUP_PHASE_FINISH(void);
extern s32 CUP_PHASE_STEP(s32, s16, s32);
s32 CUP_PHASE_UPDATE(void) {
    CupScreen *p;
    func_00229310();
    p = CUP_PHASE_GET();
    if (!p)
        return 0;
    switch (p->phase) {
    case 0:
        break;
    case 1:
        CUP_PHASE_STAGE();
        CUP_PHASE_VISIBLE(0);
        p->shown = 0;
        p->phase = 0;
        break;
    case 2:
        CUP_PHASE_OTHER();
        CUP_PHASE_INIT();
        CUP_PHASE_VISIBLE(1);
        p->shown = 1;
        p->phase = 0;
        break;
    case 3:
        SD_call(0x8400f802);
        CUP_PHASE_REDRAW(p->selection);
        p->phase = 0;
        break;
    case 4:
        func_00972020(p->group, 0);
        {
            s32 scale;
            s32 position;
            if (p->current == p->previous)
                SD_call(0x8400f802);
            scale = p->scale;
            position = p->current;
            p->current = CUP_PHASE_STEP(scale, position, p->step);
        }
        if (p->current < 1) {
            CUP_PHASE_FINISH();
            CUP_PHASE_REDRAW(p->selection);
            func_00972020(p->group, 1);
            p->scale = 0;
            p->current = 0;
            p->step = 0;
            p->phase = 0;
            p->scrollActive = 0;
        }
        break;
    case 5:
        return 1;
    default:
        break;
    }
    return 0;
}

#endif
