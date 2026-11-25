/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
void func_002DF730(u8 *, s32);
void func_002E4200(u8 *, s32);
void func_002EC3F0(CardSelectionGrid *grid, s32 page) {
    grid->active = page;
    func_002DF730(grid->pageWidgets[page], 0);
    func_002DF730(grid->pageWidgets[grid->active ^ 1], 1);
}
