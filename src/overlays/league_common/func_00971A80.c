/* compiler: mwcc-3.0.1b210 */
#include "pes6/widget_position.h"
typedef struct {
    void *widget;
} LeagueWidget;
extern WidgetPosition *func_002E4130(void *widget, WidgetPosition *position);
extern void func_002E4500(void *widget, WidgetPosition *position);
void func_00971A80(LeagueWidget *entry, f32 dx, f32 dy) {
    WidgetPosition position;
    if (!entry)
        return;
    func_002E4130(entry->widget, &position);
    position.x += dx;
    position.y += dy;
    func_002E4500(entry->widget, &position);
}
