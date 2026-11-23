/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    void *widgets[7];
} LobbyWidgetList;
extern void func_001D7F10(void *);
extern void func_0099C7C0(void *page);
extern LobbyWidgetList *D_00A7D758;
void func_00986BC0(void) {
    if (D_00A7D758 != 0) {
        func_001D7F10(D_00A7D758->widgets[0]);
        func_001D7F10(D_00A7D758->widgets[1]);
        func_001D7F10(D_00A7D758->widgets[2]);
        func_001D7F10(D_00A7D758->widgets[3]);
        func_001D7F10(D_00A7D758->widgets[4]);
        func_001D7F10(D_00A7D758->widgets[5]);
        func_001D7F10(D_00A7D758->widgets[6]);
        func_0099C7C0(D_00A7D758);
        D_00A7D758 = 0;
    }
}
