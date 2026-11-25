/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
u16 func_002EBF80(CardSelectionGrid *grid) {
    return grid->groups[grid->pages[grid->active].group].ids[grid->pages[grid->active].entry];
}
