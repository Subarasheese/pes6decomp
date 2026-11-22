/* The cups use the same display logic with different team counts and entry layouts. */
#ifndef PES6_CUP_BRACKET_DISPLAY_H
#define PES6_CUP_BRACKET_DISPLAY_H

#include "types.h"
typedef struct {
    u8 reserved0[4];
    u16 teamId;
    u8 reserved6[2];
    s32 enabled;
    u8 reservedC[0x24];
    s32 status;
    u8 reserved34[0x14];
} BracketEntry;

typedef struct {
    u8 prefix[CUP_MARKER_OFFSET];
    void *markers[CUP_TEAM_COUNT];
    void *labels[CUP_TEAM_COUNT];
    void *teamIcons[CUP_TEAM_COUNT];
    u8 beforeRoundLabels[CUP_LABEL_PADDING];
    void *roundLabels[6];
    u8 beforeEntries[CUP_ENTRY_PADDING];
    BracketEntry entries[CUP_TEAM_COUNT][CUP_SLOT_COUNT];
    u8 selected[CUP_TEAM_COUNT];
} BracketPage;

extern u8 func_00225820(void), func_0097D080(s32);
extern BracketPage *CUP_GET_PAGE(void);
extern s32 CUP_CHECK_FIRST(void);
extern s32 CUP_CHECK_SECOND(void);
extern s32 func_00B19B30(BracketEntry *);
extern void func_001D7D60(void *, s8), func_00956A80(void *, s8), func_009737C0(void *, s8);
extern void func_00956A90(void *, s32, u16, s32);
extern void func_009737E0(void *, s32, ...);
extern void *func_001F08B0(s32);

void CUP_UPDATE_BRACKET(void) {
    BracketPage *page;
    s32 i;
    func_00225820();
    page = CUP_GET_PAGE();
    if (!page)
        return;
    if (page->entries[CUP_FIRST_ROUND][0].enabled == 1 && CUP_CHECK_FIRST() == 0 && func_0097D080(5) == 1)
        func_001D7D60(page->roundLabels[0], 1);
    if (page->entries[CUP_FIRST_ROUND][0].enabled == 1 && CUP_CHECK_FIRST() == 1)
        func_001D7D60(page->roundLabels[1], 1);
    if (page->entries[CUP_SECOND_ROUND][0].enabled == 1 && CUP_CHECK_SECOND() == 1 && func_0097D080(5) == 1)
        func_001D7D60(page->roundLabels[2], 1);
    if (func_00B19B30(&page->entries[CUP_FIRST_RESULT][page->selected[CUP_FIRST_RESULT]])) {
        func_001D7D60(page->roundLabels[3], 1);
        func_001D7D60(page->roundLabels[4], 1);
    }
    if (page->entries[CUP_LAST_ROUND][0].enabled && func_00B19B30(&page->entries[CUP_LAST_RESULT][page->selected[CUP_LAST_RESULT]]))
        func_001D7D60(page->roundLabels[5], 1);
    {
        for (i = 0; i < CUP_TEAM_COUNT; i++) {
            u8 selected = page->selected[i];
            if (!func_00B19B30(&page->entries[i][selected])) {
                func_00956A80(page->teamIcons[i], 0);
            } else {
                func_00956A80(page->teamIcons[i], 1);
                func_00956A90(page->teamIcons[i], 4, page->entries[i][selected].teamId, 0);
            }
        }
    }
    {
        BracketEntry *entry;
        for (i = 0; i < CUP_TEAM_COUNT; i++) {
            entry = &page->entries[i][page->selected[i]];
            if (entry->enabled == 1) {
                func_001D7D60(page->markers[i], 1);
            } else {
                func_001D7D60(page->markers[i], 0);
            }
        }
    }
    {
        BracketEntry *entry;
        for (i = 0; i < CUP_TEAM_COUNT; i++) {
            entry = &page->entries[i][page->selected[i]];
            switch (entry->status) {
            case 0:
            case 1:
                func_009737E0(page->labels[i], 0x16, func_001F08B0(0x6c0062));
                func_009737C0(page->labels[i], 0);
                break;
            case 2:
                func_009737E0(page->labels[i], 0x16, func_001F08B0(0x6c005f));
                break;
            case 3:
                func_009737E0(page->labels[i], 0x16, func_001F08B0(0x6c0061));
                break;
            case 4:
                func_009737E0(page->labels[i], 0x16, func_001F08B0(0x6c0060));
                break;
            }
        }
    }
}

#endif
