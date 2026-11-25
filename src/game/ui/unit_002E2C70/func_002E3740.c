/* compiler: mwcc-3.0.1b210 */
#include "pes6/widget_color.h"

typedef struct {
    u8 reserved[4];
    ColoredQuad *quad;
} View;

void func_002E3740(View *view, const WidgetColor *value) {
    if (!view || !value)
        return;
    func_001EEE60(view->quad, value);
}
