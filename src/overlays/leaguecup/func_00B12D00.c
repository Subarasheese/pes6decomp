/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

extern void func_00971E30(void *panel);
extern void func_00957070(void *badge);
extern void func_001D4E00(void *window);

void func_00B12D00(void) {
    CupFixturePage *page;
    s32 row, side;
    if (!(page = func_00B14800()))
        return;
    if (page->panel)
        func_00971E30(page->panel);
    for (row = 0; row < 8; row++)
        for (side = 0; side < 2; side++)
            if (page->badges[row][side]) {
                func_00957070(page->badges[row][side]);
                page->badges[row][side] = 0;
            }
    if (page->window) {
        func_001D4E00(page->window);
        page->window = 0;
    }
}
