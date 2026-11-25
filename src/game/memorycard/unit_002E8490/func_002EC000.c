/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
void func_002EC000(CardSelectionGrid *grid, const WidgetColor *left, const WidgetColor *right) {
    grid->colors[0] = *left;
    grid->colors[1] = *right;
    grid->dirty = 1;
}
