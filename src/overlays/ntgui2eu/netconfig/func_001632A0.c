/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"
typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x4ec - 0x9c];
    s32 page;
    u8 reserved4f0[0x910 - 0x4f0];
    void *packets[2];
    u8 reserved918[8];
    s32 active, remaining, phase;
} PacketWidget;
extern void (*D_005C1450)(PacketWidget *);
extern void func_001636F0(PacketWidget *);
extern void func_0018C748(const void *);
void func_001632A0(PacketWidget *w) {
    D_005C1450(w);
    if (w->remaining) {
        --w->remaining;
        func_001636F0(w);
    }
    if (w->active && !w->remaining) {
        w->active = 0;
        w->header.redraw = 2;
        w->phase = 0;
    }
    func_0018C748(w->packets[w->page ^ 1]);
}
