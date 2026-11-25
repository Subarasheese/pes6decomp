/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
s32 func_002EBF10(CardSelectionGrid *grid) {
    if (grid->mode == 1)
        return grid->pages[grid->active].entry;
    return grid->pages[grid->active].group;
}
