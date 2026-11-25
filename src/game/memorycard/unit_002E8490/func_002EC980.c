/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
s32 func_002EC980(CardSelectionGrid *grid, s32 page, u16 id) {
    s32 groupIndex, entryIndex;
    for (groupIndex = 0; groupIndex < 20; groupIndex++) {
        for (entryIndex = 0; entryIndex < 20; entryIndex++) {
            if (id == grid->groups[groupIndex].ids[entryIndex]) {
                grid->pages[page].entry = entryIndex;
                grid->pages[page].group = groupIndex;
                grid->section = cardGridSection(grid->pages[grid->active].group);
                if ((grid->groups[grid->pages[grid->active].group].ids[1] != 0xffff ||
                     grid->allowEmpty == 1) &&
                    grid->groups[grid->pages[grid->active].group].ids[1] != 0x11e)
                    grid->mode = 1;
                else
                    grid->mode = 0;
                grid->pages[page].column = grid->pages[grid->active].group % 4;
                grid->pages[page].row = grid->pages[grid->active].group / 4;
                grid->dirty = 1;
                return 1;
            }
        }
    }
    return 0;
}
