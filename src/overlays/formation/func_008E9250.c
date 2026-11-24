/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern const char *func_001F08B0(s32);
extern const s32 D_008EC670[12];
void func_008E9250(FormationPage *page, const void *layout, u8 side) {
    s32 i;
    resetFormationPage(page);
    func_008C5DF0(page->display, 8, side, layout);
    if (!page->text) {
        void *text = func_008C1490(0x1f, layout);
        func_001D7D80(text, 2);
        page->text = text;
    }
    func_008C57D0(page->display, layout, func_001F08B0(0x3f0035), 1);
    if (page->text) {
        for (i = 0; i < 12; i++)
            page->labels[i] = func_008C13D0(page->text, D_008EC670[i], 0);
    }
}
