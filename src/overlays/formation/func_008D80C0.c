/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
void func_008D80C0(FormationDiagram *page) {
    s32 i;
    page->mode = 0;
    page->field21 = 0;
    page->option = 0;
    page->flags = 0;
    page->cursor = 0;
    page->selected = 0;
    page->layers[0] = 0;
    page->layers[1] = 0;
    page->layers[2] = 0;
    page->layers[3] = 0;
    page->layers[4] = 0;
    page->layers[5] = 0;
    page->layers[6] = 0;
    page->windows[0] = 0;
    page->windows[1] = 0;
    page->windows[2] = 0;
    for (i = 0; i < 11; i++) {
        page->markers[i] = 0;
        page->labels[i] = 0;
        page->icons[i] = 0;
        page->slots[i] = 0xff;
    }
    page->children[0] = 0;
    page->children[1] = 0;
    page->children[2] = 0;
    page->children[3] = 0;
    page->controls[0] = 0;
    page->controls[1] = 0;
    page->controls[2] = 0;
    page->overlay = 0;
    page->diagram = 0;
    func_008C5D40(page->base);
}
