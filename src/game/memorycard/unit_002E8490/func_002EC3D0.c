/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
void func_002EC3D0(CardSelectionGrid *grid, s32 page, s32 option) {
    grid->pages[page].option = option;
    grid->dirty = 1;
}
