/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "pes6/lobby_match_setup_page.h"
extern void func_001D7D80(void *, s16), func_001D7C00(void *, s8), func_001D7C20(void *, s32),
    func_001D7D60(void *, s8), func_009CF0B0(s32);
s32 func_009D0710(void) {
    void *widget;
    if (!D_00A7DDF8)
        return 0;
    widget = D_00A7DDF8->widget;
    func_001D7D80(widget, 0);
    func_001D7C00(widget, 0);
    func_001D7C20(widget, 2);
    func_001D7D60(widget, 1);
    func_009CF0B0(0);
    D_00A7DDF8->state = 2;
    return 1;
}
