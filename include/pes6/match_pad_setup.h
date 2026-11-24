#ifndef PES6_MATCH_PAD_SETUP_H
#define PES6_MATCH_PAD_SETUP_H

#include "pes6/match_pad_assignment.h"
#include "pes6/pad_settings.h"

typedef struct {
    f32 x, y, w, h;
} PadBounds;

extern s32 *D_003E9B14, D_003E9B1C;
extern s16 D_003E9AFC;
extern s8 D_003AA1F0[], D_003AA3A0[];
extern u8 D_00591C09[];
extern s32 Pes6SceneStack[], D_0053CB60[];
extern MatchPadSlot D_0053CBB0[];
extern void *D_0053CB90[];
extern s32 func_008B2F50(s32 panel, s32 part);
extern void func_008B2F10(s32 label, s32 message);
extern void func_008B2F30(s32 label, const char *text);
extern s32 func_008B3310(s32 bank, s32 part, s32 first, s32 mode, s32 arg4, s32 arg5);
extern f32 func_008B32A0(s32 panel, u16 part);
extern s32 func_008B32B0(s32 panel, void *bounds, s32 part);
extern void func_008B31A0(s32 panel, s32 visible);
extern u8 func_00154530(void);
extern u8 func_002259E0(void);
extern s32 func_002E8CB0(s32 request, s32 pad);
extern void func_002685F0(s32 pad);
extern s32 Pes6SaveData_GetUnavailableFlag(void);
extern s32 func_002DCA30(void);

static inline s32 matchPadSideKind(s32 side) {
    return side > 0 ? side : -side;
}

static inline void matchPadRedrawAll(void) {
    func_0023EC10(&D_003E9B10, PAD_REDRAW_SIDES);
    func_0023EC10(&D_003E9B10, PAD_REDRAW_ASSIGNMENTS);
    func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
    func_0023EC10(&D_003E9B10, PAD_REDRAW_NAMES);
}

extern void func_002472F0(MatchPadSlot *slots);
extern void func_00248EB0(s32 pad, s32 slot, MatchPadSlot *slots);
extern void func_0024ABF0(void);
extern void func_0024AF00(void);
extern void func_0024B240(MatchPadSlot *slots);
extern void func_0024BA00(s32 pad);
extern void func_0024BE20(s8 pad);
extern void func_0024C310(void);
extern s32 func_0024C810(u8 mode, MatchPadSlot *slots);
extern void func_0024CF50(MatchPadSlot *slots);
extern void func_0024DA90(void);
extern void func_0024E1C0(u32 pad, MatchPadSlot *slots);

#endif
