/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
void func_002ECB70(CardSelectionGrid *grid, s32 value) {
    s32 groupIndex, entryIndex;
    for (groupIndex = 0; groupIndex < 20; groupIndex++)
        for (entryIndex = 0; entryIndex < 20; entryIndex++) {
            if (grid->groups[groupIndex].ids[entryIndex] != 0xFFFF) {
                grid->groups[groupIndex].marks[entryIndex] = value;
            }
        }
    grid->dirty = 1;
}
