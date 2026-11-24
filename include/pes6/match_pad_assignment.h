#ifndef PES6_MATCH_PAD_ASSIGNMENT_H
#define PES6_MATCH_PAD_ASSIGNMENT_H

#include "types.h"

enum { MATCH_PAD_COUNT = 8, MATCH_PAD_TEXT_COUNT = 49, MATCH_PAD_PANEL_COUNT = 73 };
enum {
    PAD_REDRAW_SIDES = 1,
    PAD_REDRAW_ASSIGNMENTS = 2,
    PAD_REDRAW_CURSORS = 4,
    PAD_REDRAW_NAMES = 8
};
typedef struct {
    s8 state, side, assignment, nameMode;
    char name[46];
    s8 option, setting33;
} MatchPadSlot;
typedef union {
    s32 handles[MATCH_PAD_PANEL_COUNT];
    struct {
        s32 reserved00[38];
        s32 sideMarkers[MATCH_PAD_COUNT];
        s32 reservedB8[9];
        s32 assignmentMarkers[MATCH_PAD_COUNT];
        s32 reservedFC;
        s32 extraMarkers[MATCH_PAD_COUNT];
        s32 reserved120;
    } byPad;
} MatchPadPanels;

extern MatchPadSlot Pes6PadAssign[];
extern MatchPadPanels *D_003E9B18;
extern s32 D_003E9B10, D_0053CB40[], D_008DC230[], D_008DC270[];
extern u32 D_003E9B20;
extern s32 D_003D8BE0[];
extern s8 D_003E9B00;
extern s32 func_0024E650(void);
extern void func_0023EC10(s32 *flags, s32 flag);
extern void SD_call(u32 command);

static inline s32 matchPadConnected(s32 pad) {
    s32 mask = D_003D8BE0[pad];
    return D_003E9B20 & mask;
}

#endif
