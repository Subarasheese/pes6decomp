/* compiler: mwcc-3.0.1b210 */
#include "pes6/card_selection_grid.h"
void func_002DF730(u8 *, s32);
void func_002E4200(u8 *, s32);
void func_002EC060(CardSelectionGrid *grid, s32 enabled) {
    s32 i;
    if (enabled == 0) {
        for (i = 0; i < 2; i++)
            func_002DF730(grid->pageWidgets[i], 1);
        func_002DF730(grid->indicator, 1);
        func_002E4200(grid->details, 1);
    } else {
        for (i = 0; i < 2; i++)
            func_002DF730(grid->pageWidgets[i], 0);
        func_002DF730(grid->indicator, 0);
        func_002E4200(grid->details, 0);
    }
}
