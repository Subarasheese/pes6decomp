/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    void *widgets[3];
} MatchSetupWidgets;
extern MatchSetupWidgets *D_00A7DF10;
extern void func_001D7F10(void *widget);
extern void func_0099C7C0(void *page);
s32 func_009E5210(void) {
    if (!D_00A7DF10)
        return 0;
    func_001D7F10(D_00A7DF10->widgets[0]);
    func_001D7F10(D_00A7DF10->widgets[2]);
    func_001D7F10(D_00A7DF10->widgets[1]);
    func_0099C7C0(D_00A7DF10);
    D_00A7DF10 = 0;
    return 1;
}
