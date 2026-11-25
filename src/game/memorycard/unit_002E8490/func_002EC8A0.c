/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
void func_002EC8A0(CardSelectionGrid *grid, s32 selected) {
    s32 group;
    grid->pages[grid->active].group = selected;
    grid->pages[grid->active].column = grid->pages[grid->active].group % 4;
    grid->pages[grid->active].row = grid->pages[grid->active].group / 4;
    group = grid->pages[grid->active].group;
    grid->section = cardGridSection(group);
    grid->dirty = 1;
}
