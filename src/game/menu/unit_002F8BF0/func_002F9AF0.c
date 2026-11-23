/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 pad[0xc];
    void *handle;
} MenuControl;
extern MenuControl *func_001D6820(void);
extern void func_001F4B00(MenuControl *, s32), func_001EDA30(void *, s32),
    func_001ED840(void *, s32);
extern void *func_001D67E0(MenuControl *);
extern void func_001EF900(void *, s32);
MenuControl *func_002F9AF0(s32 unused0, s32 unused1, s32 count) {
    MenuControl *control = func_001D6820();
    s32 i;
    func_001F4B00(control, 1);
    func_001EDA30(control->handle, 1);
    func_001ED840(control->handle, 3);
    for (i = 0; i < count; i++)
        func_001EF900(func_001D67E0(control), 0);
    return control;
}
