/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
typedef struct {
    void *panel, *subpanel;
    u32 field08, field0C;
} FormationWidget;
void func_008C9200(FormationWidget *widget, s32 mode, const void *layout) {
    s32 page = 0;
    void *resource;
    widget->panel = 0;
    widget->subpanel = 0;
    widget->field08 = 0;
    widget->field0C = 0;
    if (!widget->panel && !widget->subpanel) {
        switch (mode) {
        case 1:
            page = 1;
            break;
        case 2:
            page = 2;
            break;
        }
        resource = func_008C1490(0x29, layout);
        func_001D7D80(resource, page);
        widget->panel = resource;
    }
    if (widget->panel) {
        func_008C13D0(widget->panel, 0x7e, 0);
        func_008C13D0(widget->panel, 0x7f, 0);
        func_008C13D0(widget->panel, 0x81, 0);
    }
}
