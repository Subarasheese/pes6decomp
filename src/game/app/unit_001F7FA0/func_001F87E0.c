/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00152130(s32, s32);
extern void func_001BE4D0(s32);
extern s32 Pes6NowLoading_IsActive(void);
extern void Pes6NowLoading_IsShown(void);

void func_001F87E0(s32 a0, s32 a1) {
    switch (a0) {
    case 0:
        func_001BE4D0(a1 & 0xFF);
        return;
    default:
    case 1:
        if (Pes6NowLoading_IsActive() != 0) {
            Pes6NowLoading_IsShown();
        } else {
            func_00152130(a0, a1);
        }
        return;
    }
}
