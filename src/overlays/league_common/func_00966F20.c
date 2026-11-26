/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_menu_save.h"
extern s32 func_002307F0(void);
extern void func_00949540(void);
s32 func_00966F20(void) {
    s32 nextScene = -1;
    switch (Pes6SaveData_Current->phase) {
    case 0:
        func_002307F0();
        func_00949540();
        nextScene = 26;
        break;
    }
    if (nextScene != -1)
        func_0094C790(0);
    return nextScene;
}
