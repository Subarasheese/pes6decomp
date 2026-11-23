/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    void *root, *panel;
    u8 pad08[0x270];
    void *control;
    u8 pad27c[0x1c];
    s32 selection;
} MasterLeaguePanel;
extern MasterLeaguePanel *func_00B37A60(void);
extern void *func_001D5A10(s32), *func_00973CD0(void *, s32),
    *func_00971E80(void *, s32, s32, s32, s32);
extern void func_001D7D80(void *, s16), func_00971C10(void *, s32, s32),
    func_00971B80(void *, s32, s32), func_00973AA0(void *, s32), func_00958000(s32),
    func_00955F10(s32), func_00B36EC0(void), func_00B36BC0(void);
static inline void buildPanel(void) {
    MasterLeaguePanel *p = func_00B37A60();
    if (p) {
        void *panel = func_00973CD0(p->root, 1);
        p->panel = panel;
        func_001D7D80(panel, 0);
        p->control = func_00971E80(p->panel, 1, 0xffff, 0, 10);
        func_00971C10(p->control, 0, 0);
        func_00971C10(p->control, 1, 1);
        func_00971B80(p->control, 2, 0);
        func_00973AA0(panel, 0);
        func_00973AA0(panel, 1);
        func_00958000(22);
    }
}
void func_00B37340(void) {
    MasterLeaguePanel *p = func_00B37A60();
    if (p) {
        s32 message;
        p->root = func_001D5A10(0x10342);
        buildPanel();
        func_00B36EC0();
        func_00B36BC0();
        {
            s32 choice = p->selection;
            message = 0;
            switch (choice) {
            case 0:
                message = 0x110002b;
                break;
            case 1:
                message = 0x110002c;
                break;
            }
        }
        func_00955F10(message);
    }
}
