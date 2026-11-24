/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_008C5900(void *, s32), func_008C58D0(void *, s32),
    func_008D69B0(FormationDiagram *), func_008D7AE0(FormationDiagram *, s32), func_008B4680(s32);
extern s32 func_008B9410(void);
extern const char *func_001F08B0(s32);
void func_008D8210(FormationDiagram *page, s32 mode, const void *layout, u8 side, u8 option) {
    func_008D80C0(page);
    page->mode = mode;
    page->option = option;
    func_008C5DF0(page, 11, side, layout);
    switch (mode) {
    case 0:
        func_008C57D0(page, layout, func_001F08B0(0x3f0024), 1);
        if (!func_008B9410()) {
            func_008C5900(page, 0);
            func_008C58D0(page, 1);
        }
        break;
    case 1:
        func_008C5900(page, 1);
        func_008C58D0(page, 1);
        func_008C59E0(page, 0);
        break;
    }
    if (!page->diagram)
        page->diagram = func_008C1490(0x26, layout);
    func_008D69B0(page);
    func_008D7AE0(page, 0);
    func_008B4680(1);
}
