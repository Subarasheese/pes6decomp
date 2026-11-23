/* compiler: mwcc-3.0.1b198-O3 */
#include "types.h"
extern int Pes6SaveData_GetUnavailableFlag(void), func_001B9DF0(void), func_00240680(void);
extern void func_0023E0E0(s32), func_00240610(void), func_00240600(void), func_00D0C770(s32, u32);
extern s32 Pes6SceneStack[];
void func_0024BBB0(void) {
    if (!Pes6SaveData_GetUnavailableFlag()) {
        if (func_001B9DF0()) {
            func_0023E0E0(16);
        } else if (Pes6SceneStack[0] == 4) {
            func_0023E0E0(4);
        } else {
            func_00240610();
            if (func_00240680() == 1)
                func_0023E0E0(5);
            else
                func_0023E0E0(4);
        }
    } else if (!func_001B9DF0())
        func_00D0C770(13, 0x6c0030);
    func_00240600();
}
