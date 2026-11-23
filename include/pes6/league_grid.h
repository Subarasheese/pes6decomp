#ifndef PES6_LEAGUE_GRID_H
#define PES6_LEAGUE_GRID_H

#include "types.h"
typedef struct {
    u8 reserved00[0x255];
    u8 sideCount;
    u8 reserved256[2];
    s32 busy;
    u8 selection;
} LeagueGrid;

extern LeagueGrid *func_00993A80(void);
extern s32 func_0095ED20(void);
extern void func_00991CA0(s32);
extern s32 SD_call(s32);
extern s32 func_00949130(s32 selection, s32 direction, s32 width, s32 cells);

static inline s32 moveLeagueGridSelection(s32 direction) {
    LeagueGrid *grid = func_00993A80();
    u8 next;
    if (!grid)
        return 0;
    if (grid->busy)
        return 0;
    if (!func_0095ED20())
        return 0;
    next =
        func_00949130(grid->selection, direction, grid->sideCount, (u8)(grid->sideCount * grid->sideCount));
    if (grid->selection != next) {
        func_00991CA0(next);
        SD_call(0x8400F802);
        grid->selection = next;
    }
    return 0;
}

#endif
