/* Cup bracket widgets, slot transforms, and stage layout. */
#ifndef PES6_CUP_BRACKET_SETUP_H
#define PES6_CUP_BRACKET_SETUP_H

#include "types.h"
typedef struct {
    float x, y, z, w;
} BracketPoint;
typedef struct {
    u8 prefix[8];
    u8 enabled;
    u8 reserved9[3];
    u8 suffix[0x3c];
} CupEntry;
typedef struct {
    void *root;
    void *team[CUP_TEAMS], *marker[CUP_TEAMS], *label[CUP_TEAMS], *icon[CUP_TEAMS];
    void *round[CUP_ROUNDS], *roundShadow[CUP_ROUNDS], *title;
    void *upperIcon[CUP_ROUNDS][2], *lowerIcon[CUP_ROUNDS][2], *caption, *captionLabel;
    void *upperName[CUP_ROUNDS][2], *lowerName[CUP_ROUNDS][2], *frame;
    BracketPoint slot[CUP_ROUNDS][2];
    void *roundLabels[6][CUP_ROUNDS][2];
    void *roundDetails[5][CUP_ROUNDS];
    u8 beforeRoundIndex[4];
    void *roundIndex;
    void *stages[8];
    u8 beforeRoundTabs[4];
    void *roundTabs[7], *control, *cursor, *background;
    CupEntry entries[CUP_TEAMS][CUP_ROUNDS];
    u8 selected[CUP_TEAMS];
    float tabDepth[2];
    u8 offsetCount;
    u8 beforeMargins[15];
    float margin, left, right;
    u8 beforeSelection[3];
    u8 selection;
    u8 mode;
} CupSetup;
extern CupSetup *CUP_GET_PAGE(void);
extern void *func_00973CD0(void *, s32), *func_00973AA0(void *, s32, ...);
extern void *func_00957220(void *, s32, s32, u16, s32);
extern void *func_00973940(void *, s32, u16, BracketPoint *);
extern void func_00973C70(void *, const BracketPoint *);
extern void func_001D7D60(void *, u8), func_001D7880(void *, float), func_001D7D80(void *, s16),
    func_001D7C20(void *, s32);
extern float func_001D79A0(void *, u16);
extern s32 func_001D7A20(void *, BracketPoint *, u16);
extern void *func_001F08B0(s32), *func_00220EF0(s32, s32);
extern void *func_009722D0(void *, s32, s32, s32, s32, s32), *func_001B9B30(void *, s32, s32, s32);
extern void CUP_SET_PHASE(s8), func_0095A980(void), CUP_UPDATE_PAGE(void), CUP_FINISH_PAGE(void);
#if CUP_ROUNDS > 2
extern void CUP_SET_SELECTION(s32);
#endif
#if CUP_ROUNDS == 2
extern void func_009720E0(void *, s32);
extern void func_00972040(void *, u8, s32);
extern void func_009721F0(void *, BracketPoint *);
static inline void setBracketSelection(s32 selection) {
    CupSetup *page;
    s16 offset = 0;
    s32 i;
    BracketPoint position;
    page = CUP_GET_PAGE();
    if (!page)
        return;
    func_009720E0(page->cursor, page->mode);
    func_00972040(page->cursor, selection, 0);
    for (i = 0; i < page->offsetCount; ++i)
        offset = (s16)(page->tabDepth[i] * -1.0f + (float)offset + 0.0f);
    position.x = 0.0f;
    position.y = (float)offset;
    func_009721F0(page->cursor, &position);
}
#endif
extern const char CUP_TEAM_TEXT[], CUP_SIDE_TEXT[], CUP_CAPTION_TEXT[];
#if CUP_ROUNDS == 2
#define CUP_STAGE2_START CUP_FIRST_STAGE
#define CUP_STAGE2_COUNT (CUP_TEAMS - CUP_FIRST_STAGE - 7)
#else
#define CUP_STAGE2_START (2 * CUP_FIRST_STAGE)
#define CUP_STAGE2_COUNT 2
#endif
void CUP_SETUP(void) {
    CupSetup *page = CUP_GET_PAGE();
    BracketPoint point;
    float roundDepth, depth, shadowDepth;
    int i;
    int side;
    void *tab;
    if (page) {
        for (i = 0; i < CUP_TEAMS; i++) {
            page->team[i] = func_00973CD0(page->root, 7);
            page->marker[i] = func_00973CD0(page->root, 8);
            func_001D7D60(page->marker[i], page->entries[i][0].enabled);
            page->label[i] = func_00973AA0(page->team[i], 22, CUP_TEAM_TEXT);
            page->icon[i] = func_00957220(page->team[i], 4, i, 15, 0);
        }
        for (i = 0; i < CUP_ROUNDS; i++) {
            page->round[i] = func_00973CD0(page->root, 1);
            page->roundDetails[0][i] = func_00973AA0(page->round[i], 2);
            page->roundDetails[1][i] = func_00973AA0(page->round[i], 4);
            page->roundDetails[2][i] = func_00973AA0(page->round[i], 3);
            page->roundDetails[3][i] = func_00973AA0(page->round[i], 1, func_001F08B0(0x1a00a8));
            page->roundDetails[4][i] = func_00973AA0(page->round[i], 0);
            for (side = 0; side < 2; side++) {
                page->upperIcon[i][side] = func_00957220(page->round[i], 4, i, (u16)(side + 5), 0);
                page->upperName[i][side] = func_00973AA0(page->round[i], side + 5, CUP_SIDE_TEXT);
                page->roundLabels[0][i][side] = func_00973AA0(page->round[i], side + 13, (void *)0);
                page->roundLabels[1][i][side] = func_00973AA0(page->round[i], side + 15, (void *)0);
                page->roundLabels[2][i][side] = func_00973AA0(page->round[i], side + 19, (void *)0);
                page->roundLabels[3][i][side] = func_00973AA0(page->round[i], side + 17, (void *)0);
                page->roundLabels[4][i][side] = func_00973AA0(page->round[i], side + 9, (void *)0);
                page->roundLabels[5][i][side] = func_00973AA0(page->round[i], side + 11, (void *)0);
                page->lowerIcon[i][side] = func_00957220(page->round[i], 4, i, (u16)(side + 7), 0);
                func_00973940(page->root, 1, (u16)(side + 3), &page->slot[i][side]);
            }
        }
        page->frame = func_00973CD0(page->root, 6);
        page->caption = func_00973CD0(page->root, 4);
        page->captionLabel = func_00973AA0(page->caption, 21, CUP_CAPTION_TEXT);
        page->title = func_00973CD0(page->root, 5);
        for (i = 0; i < CUP_ROUNDS; i++)
            for (side = 0; side < 2; side++)
                page->lowerName[i][side] = func_00973AA0(page->round[i], side + 7, CUP_SIDE_TEXT);
        roundDepth = func_001D79A0(page->round[0], 2);
        for (i = 0; i < CUP_ROUNDS; i++) {
            page->roundShadow[i] = func_00973CD0(page->root, 3);
            func_001D7880(page->roundShadow[i], roundDepth);
        }
        CUP_SET_PHASE(0);
        func_00973940(page->root, 2, 9, &point);
        page->margin = point.x;
        func_00973940(page->root, 2, 10, &point);
        page->left = point.y;
        func_00973940(page->root, 2, 11, &point);
        page->right = point.y;
        for (i = 0; i < 8; i++)
            page->stages[i] = func_00973CD0(page->root, i + 11);
        depth = func_001D79A0(page->stages[0], 19);
        shadowDepth = roundDepth + depth;
        for (i = 0; i < CUP_ROUNDS; i++) {
            func_001D7880(page->round[i], depth);
            func_001D7880(page->roundShadow[i], shadowDepth);
        }
        func_00973AA0(page->stages[0], 23);
        func_00973AA0(page->stages[1], 24);
        func_00973AA0(page->stages[2], 25);
        func_00973AA0(page->stages[3], 26);
        func_00973AA0(page->stages[4], 27);
        func_00973AA0(page->stages[6], 28, func_00220EF0(18, 1));
        func_00973AA0(page->stages[6], 29);
        func_00973AA0(page->stages[7], 30);
        for (i = 0; i < CUP_FIRST_STAGE; i++) {
            float z;
            func_00973940(page->root, 12, (u16)(i + 19), &point);
            func_00973C70(page->team[i], &point);
            func_00973C70(page->marker[i], &point);
            z = func_001D79A0(page->stages[1], (u16)(i + 19));
            func_001D7880(page->team[i], z);
            func_001D7880(page->marker[i], z);
        }
#if CUP_ROUNDS > 2
        for (i = 0; i < CUP_FIRST_STAGE; i++) {
            float z;
            func_00973940(page->root, 12, (u16)(i + 19 + CUP_FIRST_STAGE), &point);
            func_00973C70(page->team[i + CUP_FIRST_STAGE], &point);
            func_00973C70(page->marker[i + CUP_FIRST_STAGE], &point);
            z = func_001D79A0(page->stages[1], (u16)(i + 19 + CUP_FIRST_STAGE));
            func_001D7880(page->team[i + CUP_FIRST_STAGE], z);
            func_001D7880(page->marker[i + CUP_FIRST_STAGE], z);
        }
#endif
        for (i = 0; i < CUP_STAGE2_COUNT; i++) {
            float z;
            func_00973940(page->root, 13, (u16)(i + 19 + CUP_STAGE2_START), &point);
            func_00973C70(page->team[i + CUP_STAGE2_START], &point);
            func_00973C70(page->marker[i + CUP_STAGE2_START], &point);
            z = func_001D79A0(page->stages[2], (u16)(i + 19 + CUP_STAGE2_START));
            func_001D7880(page->team[i + CUP_STAGE2_START], z);
            func_001D7880(page->marker[i + CUP_STAGE2_START], z);
        }
        for (i = 0; i < 3; i++) {
            float z;
            func_00973940(page->root, 17, (u16)(i + 19 + CUP_STAGE2_START + CUP_STAGE2_COUNT),
                          &point);
            func_00973C70(page->team[i + CUP_STAGE2_START + CUP_STAGE2_COUNT], &point);
            func_00973C70(page->marker[i + CUP_STAGE2_START + CUP_STAGE2_COUNT], &point);
            z = func_001D79A0(page->stages[6], (u16)(i + 19 + CUP_STAGE2_START + CUP_STAGE2_COUNT));
            func_001D7880(page->team[i + CUP_STAGE2_START + CUP_STAGE2_COUNT], z);
            func_001D7880(page->marker[i + CUP_STAGE2_START + CUP_STAGE2_COUNT], z);
        }
        for (i = 0; i < 4; i++) {
            float z;
            func_00973940(page->root, 18, (u16)(i + 22 + CUP_STAGE2_START + CUP_STAGE2_COUNT),
                          &point);
            func_00973C70(page->team[i + CUP_STAGE2_START + CUP_STAGE2_COUNT + 3], &point);
            func_00973C70(page->marker[i + CUP_STAGE2_START + CUP_STAGE2_COUNT + 3], &point);
            z = func_001D79A0(page->stages[7], (u16)(i + 22 + CUP_STAGE2_START + CUP_STAGE2_COUNT));
            func_001D7880(page->team[i + CUP_STAGE2_START + CUP_STAGE2_COUNT + 3], z);
            func_001D7880(page->marker[i + CUP_STAGE2_START + CUP_STAGE2_COUNT + 3], z);
        }
        tab = func_00973CD0(page->root, 10);
        for (i = 0; i < 2; i++) {
            func_001D7D80(tab, i);
            func_001D7A20(tab, &point, 18);
            page->tabDepth[i] = point.w;
        }
        for (i = 0; i < 7; i++) {
            page->roundTabs[i] = func_00973CD0(page->root, i + 19);
            if (i > 0)
                func_001D7D60(page->roundTabs[i], 0);
            else
                func_001D7D60(page->roundTabs[i], 1);
            func_001D7C20(page->roundTabs[i], 2);
        }
        page->roundIndex = func_00973CD0(page->root, 26);
        page->control = func_00973CD0(page->root, 9);
        page->cursor = func_009722D0(page->control, 17, 16, 4, 0, 0);
        page->background = func_001B9B30(page->root, 0, 0, 1);
        func_0095A980();
        CUP_UPDATE_PAGE();
#if CUP_ROUNDS == 2
        setBracketSelection(page->selection);
#else
        CUP_SET_SELECTION(page->selection);
#endif
        CUP_FINISH_PAGE();
    }
}

#endif
