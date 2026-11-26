#ifndef PES6_LEAGUE_CHOICE_NAVIGATION_H
#define PES6_LEAGUE_CHOICE_NAVIGATION_H

#include "types.h"

typedef struct {
    u8 reserved00[0x22c];
    u8 selection;
    s8 side;
    u8 reserved22E[6];
    u8 entries;
    u8 reserved235[3];
    s32 mode;
} LeagueChoice;

extern u8 *func_00229380(void);
extern u32 func_009B7C90(void);
extern s32 func_00949130(s32 selection, s32 direction, s32 width, s32 count);
extern void func_009B5A10(s8 selection);
extern void SD_call(u32 sound);
extern s32 func_009B7B30(u8 selection), func_009B79F0(u8 selection);
extern u8 func_00225820(void);
extern u16 func_00225680(u8 slot);
extern s32 func_00995330(u8 selection, u8 slot), func_009B71E0(u8 selection);
extern u8 D_00591C09[];
extern void func_009B5940(s8 side);

static inline s32 moveLeagueChoice(s32 direction) {
    u8 *competition = func_00229380();
    LeagueChoice *page = (LeagueChoice *)func_009B7C90();
    if (!page) {
        return 0;
    }
    switch (page->mode) {
    case 0: {
        u8 count = page->entries;
        s32 width = count < 10 ? count : 10;
        page->selection = func_00949130(page->selection, direction, width, count);
        func_009B5A10((s8)page->selection);
        SD_call(0x8400F802U);
        break;
    }
    case 1: {
        if (page->side == 0) {
            if (func_009B7B30(page->selection) == 1 || func_009B79F0(page->selection) == 1) {
                page->side = 1;
                SD_call(0x8400F802U);
            }
        } else if (page->side == 1) {
            u8 slot = func_00225820();
            func_00225680(slot);
            func_00995330(page->selection, slot);
            if (D_00591C09[0] == 4) {
                if ((u8)func_00995330(page->selection, slot) != 0xff) {
                    page->side = 0;
                    SD_call(0x8400F802U);
                }
            } else {
                if ((u8)func_009B71E0(page->selection) != 0xff &&
                    (u8)func_009B71E0(page->selection) != 0xfe) {
                    page->side = 0;
                    SD_call(0x8400F802U);
                } else if (*competition == 11 || *competition == 13) {
                    page->side = 0;
                    SD_call(0x8400F802U);
                }
            }
        }
        func_009B5940(page->side);
        break;
    }
    default:
        break;
    }
    return 0;
}

#endif
