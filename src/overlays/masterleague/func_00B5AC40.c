/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    void *container;
} MasterLeaguePage;
extern MasterLeaguePage *func_00B59340(void);
extern void *func_001D5A10(s32);
extern void func_00B5A940(void), func_00B5A650(void), func_00B5A450(s32);
extern s32 func_00B568D0(void);
void func_00B5AC40(void) {
    MasterLeaguePage *p = func_00B59340();
    if (p) {
        void *container = func_001D5A10(0x10340);
        p->container = container;
        if (container) {
            func_00B5A940();
            func_00B5A650();
            func_00B5A450(func_00B568D0());
        }
    }
}
