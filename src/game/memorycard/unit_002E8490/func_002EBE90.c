/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
s32 func_002EBE90(CardSelectionGrid *grid, u16 id) {
    s32 groupIndex, entryIndex;
    for (groupIndex = 0; groupIndex < 20; groupIndex++)
        for (entryIndex = 0; entryIndex < 20; entryIndex++) {
            if (id == grid->groups[groupIndex].ids[entryIndex]) {
                return 1;
            }
        }
    return 0;
}
