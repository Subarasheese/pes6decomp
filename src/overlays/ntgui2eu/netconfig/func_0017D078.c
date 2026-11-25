/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    s64 parts[2];
} WidgetSnapshot;
typedef struct {
    u8 reserved00[0x98];
    s32 redraw;
    u8 reserved9c[0x930 - 0x9c];
    WidgetSnapshot first, current, last;
} SnapshotWidget;
extern void (*D_005C00F4)(SnapshotWidget *widget);
void func_0017D078(SnapshotWidget *w) {
    D_005C00F4(w);
    w->first = w->last = w->current;
    w->redraw = 2;
}
